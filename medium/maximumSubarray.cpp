class Solution {
public:
    //53. Maximum Subarray

    //Returns sum of the subarray of nums with the greatest sum
    int maxSubArray(vector<int>& nums) {
        //Initialize maximum sum to minimum integer and current sum to 0
        int maxSum = INT_MIN;
        int currSum = 0;

        //For each value in nums, add value to current sum
        //If current sum is greater than the max sum, set max sum to current sum
        //If current sum is less than 0 then set current sum to 0 (current sum cannot be less than 0 since a subarray of len 0 has a sum of 0)
        for (int i = 0; i < nums.size(); i++)
        {
            currSum += nums.at(i);
            if (currSum > maxSum)
                maxSum = currSum;
            if (currSum < 0)
                currSum = 0;
        }

        //Return max sum found
        return maxSum;
    }
};