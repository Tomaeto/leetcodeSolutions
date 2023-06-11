class Solution {
public:
    //733. Flood Fill

    //Given an m x n grid, performs a flood fill starting from a given index
    //uses a depth-first search to perform a flood fill

    //depth-first search for performing flood fill on the grid
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int startVal){
        if (sr < 0 || sr > image.size() - 1 || sc < 0 || sc > image[0].size() - 1|| image[sr][sc] != startVal) return;
        image[sr][sc] = color;

        dfs(image,sr-1,sc,color,startVal);
        dfs(image,sr+1,sc,color,startVal);
        dfs(image,sr,sc-1,color,startVal);
        dfs(image,sr,sc+1,color,startVal);
    }
    
    //Function for calling dfs and returning result
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if (image[sr][sc]==color) return image;
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;
    }
};