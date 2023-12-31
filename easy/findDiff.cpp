class Solution {
public:
    //389. Find the Difference

    //String t is generated by shuffling string s and adding a random character at a random position
    //Return the letter that was added to t.

    //Sums each string's ASCII values and returns the difference cast to a char
    char findTheDifference(string s, string t) {
        int sSum = 0, tSum = 0;
        for (char ch : s) sSum += ch;
        for (char ch : t) tSum += ch;
        return char(tSum - sSum);
    }
};
