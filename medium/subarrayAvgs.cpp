class Solution {
public:
    //2090. K Radius Subarray Averages

    //Uses a sliding window to find average of k-radius subarray centered at i
    //If an index has less than k elements on each side, average is -1
    vector<int> getAverages(vector<int>& nums, int k) {
        long size = nums.size();
        long len = 2*k + 1;
        long sum = 0;
        vector<int> avgs(size, -1);
        //If array is too small to contain a k-radius subarray, return all -1's
        if (size < len) return avgs;

        for (int i = 0; i < size; i++) {
            sum += nums[i];
            //If i - len is not within subarray, remove value from sum
            if (i - len >= 0) sum -= nums[i-len];
            //If i leaves subarray range, store average centered at i-k
            if (len - 1 <= i) avgs[i-k] = sum / len;
        }
        return avgs;
    }
};
