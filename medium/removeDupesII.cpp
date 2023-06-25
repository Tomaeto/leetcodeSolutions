class Solution {
public:
    //80. Remove Duplicates from Sorted Array II

    //Given array nums sorted in non-decreasing order, return nums w/ no elements appearing more than twice
    //  and number of elements k

    //Since array is non-decreasing, checks value 2 behind current amount in nums
    //If value is greater than value 2 behind, add to array
    int removeDuplicates(vector<int>& nums) {
        int k = 0;
        for (auto num : nums) {
            if (k < 2 || num > nums[k-2]) nums[k++] = num;
        }
        return k;
    }
};
