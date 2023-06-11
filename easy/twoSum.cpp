
class Solution {
    //1. Two Sum
    
    //Returns indices of two numbers from nums vector that add up to target value
    //Calculates the complement of each value in nums, searchs for the complement, and returns both indices if found
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> solution;
        map<int, int> entries;
        int complement;
        for (int i = 0; i < nums.size(); i++)
        {
            entries[nums.at(i)] = i;
        }
        
        for (int j = 0; j < nums.size(); j++)
        {
            complement = target - nums.at(j);
            if (entries.find(complement) != entries.end() && 
                entries[complement] != j)
            {
                solution.push_back(j);
                solution.push_back(entries[complement]);
                break;
            }
        }
        return solution;
    }
};