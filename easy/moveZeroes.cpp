class Solution {
public:
    //283. Move Zeroes

    //Given array nums, move all zeroes to the end of nums while retaining the relative order of other elements

    //Uses two pointers to track nonzero elements and swaps with iterating pointer when nonzero is found
    void moveZeroes(vector<int>& nums) {
        int numPtr = 0;
        int temp;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                temp = nums[numPtr];
                nums[numPtr] = nums[i];
                numPtr++;
                nums[i] = temp;
            }
        }
    }
};
