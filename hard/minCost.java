class Solution {
    //2448. Minimum Cost to Make Array Equal

    //Given two arrays nums and cost, return minimum total cost to make all elements of nums equal
    //Increasing or decreasing the ith element costs cost[i]

    //The cost function is a convex function on the range [min(A), max(A)]
    //So, to find the minimum value of the cost function, uses a binary search
    public long minCost(int[] nums, int[] cost) {
        //Initial left and right values, set to min and max possible
        long left = 1;
        long right = 1000000;
        //Finding minimum and maximum elements in nums
        for (int num : nums) {
            left = Math.min(num, left);
            right = Math.max(num, right);
        }
        //Initializing ans to first cost
        long ans = findCost(nums, cost, 1);
        //Performing binary search to find lowest possible cost
        while (left < right) {
            long mid = (left + right) / 2;
            long y1 = findCost(nums, cost, mid);
            long y2 = findCost(nums, cost, mid + 1);
            ans = Math.min(y1, y2);
            if (y1 < y2) right = mid;
            else left = mid + 1;
        }
        return ans;
    }

    //Cost-finding function
    //Multiplies difference by cost to change element by 1 and sums for all elements
    private long findCost(int[] nums, int[] cost, long x) {
        long res = 0;
        for (int i = 0; i < nums.length; i++) {
            res += Math.abs(nums[i] - x) * cost[i];
        }
        return res;
    }
}
