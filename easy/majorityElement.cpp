class Solution {
public:
    //169. Majority Element

    //Returns the majority element in the given array nums
    //A majority element is the element that occupies more than half the indices in the array
    int majorityElement(vector<int>& nums) {
        //Intializing the number of entries needed to be majority element
        int n = nums.size() / 2;
        //Map for storing the frequency of each element in nums
        map<int, int> counts;

        //For each entry in nums, iterate frequency counter (0-indexed)
        //If frequency ever reaches n, return that value
        for (int i = 0; i < nums.size(); i++)
        {
            if (counts.find(nums[i]) == counts.end())
                counts[nums[i]] = 0;
            else
                counts[nums[i]]++;
            if (counts[nums[i]] == n)
                return nums[i];
        }
        //If no majority element is found, return -1
        return -1;
    }
};