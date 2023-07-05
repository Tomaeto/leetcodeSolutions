class Solution {
public:
    //66. Plus One

    //Given array digits representing a large integer, increment the integer by one and return the resulting array
    vector<int> plusOne(vector<int>& digits) {
        //Starting from end of array (first digit), if digit is less than 9, increment and return
        //Otherwise, set digit to 0 and move onto next digit
         for (int i = digits.size() - 1; i >= 0; i--) {
             if (digits[i] < 9) {
                 digits[i]++;
                 return digits;
             }
             digits[i] = 0;
         }
         //If digits was not returned before, all digits were 9, so add a 1 to the front of the digit and return
         digits.insert(digits.begin(), 1);
         return digits;
    }
};
