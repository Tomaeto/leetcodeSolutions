class Solution {
public:
    //459. Repeated Substring Pattern
    //Given string s, check if it is constructed of multiple copies of a substring of s

    //Intializes s2 with s concat to itself, removes end characters, and checks for s within s2
    //Finding s within s2 means shifting s can result in a repeat of s, thus it is a repeated substring
    //Removes end characters to avoid matching with first or second half
    bool repeatedSubstringPattern(string s) {
        string s2 = s + s;
        s2 = s2.substr(1, s2.size() - 2);
        return s2.find(s) < s2.size();
    }
};
