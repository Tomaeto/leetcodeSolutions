class Solution {
public:
    //228. Summary Ranges

    //For a given sorted unique array nums, return array of ranges that cover the numbers in nums exactly
    //A range [a,b] is output as:
    //  a->b if a != b
    //  a if a == b
    vector<string> summaryRanges(vector<int>& nums) {
        //Vector for storing ranges
        vector<string> output;
        //string for current range
        string range;
        //counter variable for checking for a range
        int j;
        //For each value in nums, check following values to determine range
        //Increment j while the following value belongs to the current range
        for (int i = 0; i < nums.size(); i++) {
            j = i + 1;
            while (j < nums.size() && nums[j] == nums[i] + (j - i)) {
                j++;
            }
            //After the bound of the range is found, building range string
            //If j is greater than initial value, range is multiple nums, so build corresponding string and set i
            if (j > i + 1) {
                range = to_string(nums[i]) + "->" + to_string(nums[j-1]);
                i = j - 1;
            }
            //Else range is single value, so build corresponding string
            else {
                range = to_string(nums[i]);
            }
            //Push range into output array and reset range string
            output.push_back(range);
            range = "";

        }
        return output;
    }
};