class Solution {
public:
    //189. Rotate Array

    //Given array nums, rotates array to the right by k steps
    //Uses k as a pivot point, rotates subarrays on either side of k and then rotates entire array
    void rotate(vector<int>& nums, int k) {
        //Adjusting k if k < nums.size()
        k = k % nums.size();
        //Rotating left subarray
        reverse(nums.begin(), nums.end() - k);
        //Rotating right subarray
        reverse(nums.begin() + (nums.size() - k), nums.end());
        //Rotating entire array
        reverse(nums.begin(), nums.end());
    }
};
