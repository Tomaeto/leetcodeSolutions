class Solution {
public:
    //1502. Can Make Arithmetic Progresson From Sequence

    //Given array arr, return boolean representing if an arithmetic progression can be made from the sequence in the array
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int diff = arr[1] - arr[0];
        for (int i = 2; i < arr.size(); i++) {
            if ((arr[i] - arr[i-1]) != diff)
                return false;
        }
        return true;
    }
};