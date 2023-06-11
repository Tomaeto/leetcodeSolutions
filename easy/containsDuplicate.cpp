class Solution {
public:
    //217. Contains Duplicate

    //For a given array nums, returns boolean representing if nums contains any duplicate values
    bool containsDuplicate(vector<int>& nums) {
        //Map for storing frequency of each value in nums
        map<int, int> entries;
        for (int i = 0; i < nums.size(); i++)
        {
            //If a value in nums has no entry in the map, add entry
            if (entries.find(nums[i]) == entries.end())
                entries[nums[i]] == 0;
            //Else value is a repeat, so return true
            else
                return true;
        }
        //If no repeats were found, return false
        return false;
    }
};