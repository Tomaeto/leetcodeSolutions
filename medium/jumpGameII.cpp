class Solution {
public:
    //45. Jump Game II

    //Given array nums, positioned initially at nums[0] return min jumps to reach n - 1
    //Uses greedy BFS
    int jump(vector<int>& nums) {
        int maxDist = nums[0];
        int lastPos = 0;
        int jumps = 0;
        int i = 0;
        //While the last position is n - 1, update max distance
        //If index is the same as the last position (maxDist is finalized), update last position to max distance and      
        //  increment jumps
        while (lastPos < nums.size() - 1) {
            maxDist = max(maxDist, i + nums[i]);
            if (i == lastPos) {
                lastPos = maxDist;
                jumps++;
            }
            i++;
        }
        return jumps;
    }
};
