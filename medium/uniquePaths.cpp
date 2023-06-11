class Solution {
public:
    //62. Unique Paths

    //Returns the number of possible unique paths from top-left to bottom-right in an m X n grid
    int uniquePaths(int m, int n) {
        vector<int> dp(n,1);
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[j] += dp[j-1];
            }
        }
        return dp[n-1];
    }
};