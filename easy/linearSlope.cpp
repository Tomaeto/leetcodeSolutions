class Solution {
public:
    //1232. Check if It is a Straight Line

    //Given an array coordinates in format coordinates[i] = [x, y] determine if these points make a straight line
    //Stores x and y difference b/w first two points, then checks for linearity using gradient
    //This allows for checking linearity while avoiding possible division by 0 using point-slope method
    bool checkStraightLine(vector<vector<int>>& coordinates) {
       int xdiff = coordinates[1][0] - coordinates[0][0];
       int ydiff = coordinates[1][1] - coordinates[0][1];
       for (int i = 2; i < coordinates.size(); i++) {
           if ( (coordinates[i][0] - coordinates[0][0]) * ydiff != (coordinates[i][1] - coordinates[0][1]) * xdiff )
                return false;
       }
       return true;
    }
};
