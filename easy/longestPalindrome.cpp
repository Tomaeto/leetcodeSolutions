class Solution {
public:
    //409. Longest Palindrome

    //Given a string s, return length of longest palindrome that can be built from the letters in s
    //Letters are case sensitive, so 'Aa' is not a palindrome
    int longestPalindrome(string s) {
        //map for storing frequency of each character in string s
        map<char, int> charFreq;
        //Intialize length of palindrome and boolean for if there is a character with a frequency of 1 (would go into middle of palindrome)
        int len = 0;
        int singleChar = false;
        //Building frequency map from characters in s
        for (int i = 0; i < s.length(); i++) {
            if (charFreq.find(s[i]) == charFreq.end())
                charFreq[s[i]] = 1;
            else
                charFreq[s[i]]++;
        }
        //For each character in the frequency table, if frequency is at least 2, add two to length and decrement frequency by 2
        for (auto it = charFreq.begin(); it != charFreq.end(); it++) {
            while (it->second >= 2) {
                len += 2;
                it ->second -=2;
            }
            //If there is a character with a frequency of 1, set singleChar to true
            if (it->second == 1) singleChar = true;
        }
        //if singleChar is true, increment length
        if (singleChar) len++;
        //return length of longest possible palindrome
        return len;
    }
};