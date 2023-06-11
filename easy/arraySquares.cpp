class Solution {
public:
    //977. Squares of a Sorted Array

    //Given sorted array nums, return sorted array of squares of each number
    vector<int> sortedSquares(vector<int>& nums) {
        //Converting each value in nums to its absolute value
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = abs(nums[i]);
        }
        //Resorting nums
        sort(nums.begin(), nums.end(), less<int>());
        //Squaring each value of nums
        for (int i = 0; i < nums.size(); i++) {
            nums[i] *= nums[i];
        }
        //Returning nums with squared elements
        return nums;
    }
};