class Solution {
public:
    //744. Find Smallest Letter Greater Than Target

    //For given sorted array of letters, returns smallest character in letters that is greater than target
    char nextGreatestLetter(vector<char>& letters, char target) {
        //Converting target to integer
        int targetVal = target - 'a';
        //Finding smallest letter greater than target and returning
        for (char ch : letters) {
            if (ch - 'a' > targetVal) return ch;
        }
        //If no letter is found, return first index of letters
        return letters[0];
    }
};