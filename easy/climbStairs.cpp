class Solution {
public:
    //70. Climbing Stairs

    //returns number of distinct ways to reach top of staircase with n steps when taking 1 or 2 steps at a time
    int climbStairs(int n) {
        //If n is less than or equal to 2, return n
        if (n <= 2) return n;

        //Vector for storing number of solutions at each number of stairs
        vector<int> sols(n+1);
        //For 0, 1, and 2, there are that many solutions, so set values
        sols[0]=0;
        sols[1]=1;
        sols[2]=2;

        //For 3 and up, number of solutions equals sum of previous two solutions
        for (int i = 3; i <= n; i++) {
            sols[i] = sols[i-1] + sols[i-2];
        }
        //Return number of solutions at n
        return sols[n];
    }
};