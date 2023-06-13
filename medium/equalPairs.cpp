class Solution {
public:
    //2352. Equal Row and Column Pairs

    //Given a 0-indexed n x n matrix, returns the number of pairs (r, c) such that row r and column c are equal
    //Uses two maps to store the rows and columns w/ their frequency, then searches for each row within the column map
    int equalPairs(vector<vector<int>>& grid) {
        map<string, int> rows;
        map<string, int> cols;
        string curRow;
        string curCol;
        int numPairs = 0;
        //Building row & col strings and storing in maps
        // '|' placed after each integer to prevent false matches (i.e. 1,11 and 11,1 matching)
        for (int i = 0; i < grid.size(); i++) {
            curRow = "";
            curCol = "";
            for (int j = 0; j < grid[0].size(); j++) {
                curRow += to_string(grid[i][j]) + "|";
                curCol += to_string(grid[j][i]) + "|";
            }
            if (rows.find(curRow) == rows.end()) {
                rows[curRow] = 1;
            }
            else rows[curRow]++;

            if (cols.find(curCol) == cols.end()) {
                cols[curCol] = 1;
            }
            else cols[curCol]++;
        }

        //For each pair found, add product of frequencies to the number of pairs
        for (auto row : rows) {
            if (cols.find(row.first)!= cols.end()) {
                numPairs += row.second * cols.find(pair.first)->second;
            }
        }
        return numPairs;
    }
};
