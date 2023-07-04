class Solution {
public:
    //1768. Merge Strings Alternately

    //Given two strings, merge string characters in alternating order starting with word1
    //If one string is longer, append extra letters to end of merged string
    string mergeAlternately(string word1, string word2) {
        int ptr1 = 0, ptr2 = 0;
        string ans = "";
        //Alternating appending characters while possible
        while (ptr1 < word1.length() && ptr2 < word2.length()) {
            ans += word1[ptr1++];
            ans += word2[ptr2++];
        }
        //Appending any extra characters to end of merged string
        while (ptr1 < word1.length()) ans += word1[ptr1++];
        while (ptr2 < word2.length()) ans += word2[ptr2++];
        return ans;
    }
};
