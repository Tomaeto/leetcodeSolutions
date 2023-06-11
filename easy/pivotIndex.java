class Solution {
    //724. Find Pivot Index

    //Given array nums, returns pivot index
    //A pivot index is the index where the sum of all numbers strictly to the left equals the sum of all numbers strictly to the right
    public int pivotIndex(int[] nums) {
        int rSum = 0;
        for (int num : nums) {
            rSum += num;
        }
        int lSum = 0;
        for (int i = 0; i < nums.length; i++) {
            rSum -= nums[i];
            if (lSum == rSum) return i;
            lSum += nums[i];
        }
        return -1;
    }
}