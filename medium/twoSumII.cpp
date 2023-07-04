class Solution {
public:
    //167. Two Sum II

    //Given sorted array numbers and target, return 1-indexed indices of the values
    //      in numbers that sum to target.

    //Uses two pointers to find indices
    vector<int> twoSum(vector<int>& numbers, int target) {
        //Initialize left to start of numbers and right to end of numbers
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> answer;
        while (left < right) {
            //If sum is correct, push incremented indices (1-indexed) into vector and return
            if (numbers[left] + numbers[right] == target) {
                answer.push_back(++left);
                answer.push_back(++right);
                return answer;
            }
            //If sum is greater than target, move right inwards
            //If sum is less than target, move left inwards
            if (numbers[left] + numbers[right] > target) right--;
            else left++;
        }
        return answer;
    }
};
