class Solution {
public:
    //200. Number of Islands

    //Given an m x n binary grid repesenting a map of 1's (land) and 0's (water), returns the number of islands
    //Uses a depth-first search to find the size of each island
    int numIslands(vector<vector<char>>& grid) {
        //Initializing island count to 0
        int islCount = 0;
        //For each element in the grid, if a space equals 1, perform dfs and increment island count
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == '1') {
                    depthFirstSearch(grid,i,j);
                    islCount++;
                }
            }
        }
        return islCount;
    }


    //Depth-first search for finding all elements within a single island
    //Converts all elements to 0 while conducting dfs to prevent counting island more than once
    void depthFirstSearch(vector<vector<char>>& grid, int i, int j) {
        int c = grid.size();
        int r = grid[0].size();
        //If index is less than 0 or greater than possible values or value is not 1, end dfs
        //Else, set grid space to 0 and perform dfs to the four adjacent grid spaces
        if (i < 0 || j < 0 || i == c || j == r || grid[i][j] != '1') return;
        grid[i][j] = '0';
        depthFirstSearch(grid,i-1,j);
        depthFirstSearch(grid,i+1,j);
        depthFirstSearch(grid,i,j-1);
        depthFirstSearch(grid,i,j+1);
    }
};