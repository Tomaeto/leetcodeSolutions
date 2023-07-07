class Solution {
public:
    //Given a square matrix mat, return the sum of the matrix diagonals

    //If the diagonals intersect, only include intersection value once
    int diagonalSum(vector<vector<int>>& mat) {
        int primary = 0;
        int sum = 0;
        //For each row, add primary and secondary diagonal's values to sum
        for (auto row : mat) {
            sum += row[primary] + row[mat.size() - 1 - primary];
            primary++;
        }
        //If matrix has an odd number of rows, diagonals intersect, so subtract duplicate entry at center of matrix
        if (mat.size() % 2) sum -= mat[mat.size()/2][mat.size()/2];
        return sum;
    }
};
