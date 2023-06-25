class Solution {
public:
    //27. Remove Element

    //Given array nums and integer val, returns nums w/ all elements != val at front
    //  and number of elements != val k
    //Stores all elements != val in results and swaps with nums
    int removeElement(vector<int>& nums, int val) {
        vector<int> result;
        int k = nums.size();
        for (auto num : nums) {
            if (num == val) k--;
            else result.push_back(num);
        }
        nums = result;
        return k;
        
    }
};
