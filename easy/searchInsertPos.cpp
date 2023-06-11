class Solution {
public:
    //35. Search Insert Position

    //Return index of target value in sorted array nums or the index it would be in if it is not found
    int searchInsert(vector<int>& nums, int target) {
        //Initialize last value to first value in nums
        int last = nums[0];

        //If last is greater than the target, target would go at the first index, so return 0
        if (last >= target) return 0;

        //For each value in nums, if nums is found then return index
        //If value is greater than the target and target is less than the last value, return index
        //Else set last value to current value
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == target) return i;
            if (nums[i] > target && last < target) return i;
            last = nums[i];
        }

        //If end of array is reached, return size of array
        return nums.size();
    }
};