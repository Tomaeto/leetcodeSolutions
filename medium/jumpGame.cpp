class Solution {
public:
    //55. Jump Game

    //Given an array nums, each element represents maximum jump length from that position
    //Return true if you can reach the last index, false otherwise

    //Stores maximum distance after each jump
    //If current index ever exceeds maximum distance, return false
    //If dist > index after checking whole array, then dist > nums.size(), so return true
    bool canJump(vector<int>& nums) {
        int dist = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > dist) return false;
            dist = max(dist, i + nums[i]);
        }
        return true;
    }
};
