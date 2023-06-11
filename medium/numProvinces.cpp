class Solution {
public:
    //547. Number of Provinces

    //For a given 2D array of cities, return total number of provinces (connected sequence of cities)
    //Uses Depth-First Search to traverse n*n matrix & find number of islands/provinces
    int findCircleNum(vector<vector<int>>& isConnected) {
        int size = isConnected.size();
        int provinces = 0;
        vector<bool> visited(size, false);
        //For each node, if not visited yet then add province and perform dfs to find all connected nodes
        for (int i = 0; i < size; i++) {
            if (!visited[i]) {
                provinces++;
                dfs(isConnected, visited, i);
            }
        }
        return provinces;
    }

    //Depth-First Search to find all nodes connected to initial node
    //Mark current node as true and recursively perform dfs for each node connected within matrix
    void dfs(vector<vector<int>>& isConnected, vector<bool>& visited, int node) {
        visited[node] = true;
        for (int neighbor = 0; neighbor < isConnected.size(); neighbor++) {
            if (isConnected[node][neighbor] == 1 && !visited[neighbor])
                dfs(isConnected, visited, neighbor);
        }
    }
};