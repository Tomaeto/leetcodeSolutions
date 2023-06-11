class Solution {
public:
    //26. Remove Duplicates from Sorted Array

    //Removes duplicate values from given array nums and returns number of unique elements in nums
    int removeDuplicates(vector<int>& nums) {
        //Intially, number of unique elements is size of nums (all elements)
        int k = nums.size();

        //Max value of entry in nums is 100, so intialize lastVal to 101
        int lastVal = 101;

        //For each value in nums, if current value equals last value then decrement k and erase entry from nums
        //Else set lastVal to current value
        for (auto i = nums.begin(); i != nums.end(); i++) {
            if (*i == lastVal) {
                k--;
                nums.erase(i);
                i--;
            }
            else
                lastVal = *i;
        }

        //Returning number of unique elements in nums
        return k;
    }
};