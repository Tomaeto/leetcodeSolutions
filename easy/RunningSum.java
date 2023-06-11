class Solution {
    //1480. Running Sum of 1D Array

    //Given an array nums, returns running sum of nums
    //A running sum is the sum of all values up to a given index
    public int[] runningSum(int[] nums) {
        int[] rSums = new int[nums.length];
        rSums[0] = nums[0];
        for (int i = 1; i < rSums.length; i++) {
            rSums[i] = rSums[i-1] + nums[i];
        }
        return rSums;
    }
