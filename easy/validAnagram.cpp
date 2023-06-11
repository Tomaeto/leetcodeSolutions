class Solution {
public:
    //242. Valid Anagram

    //Given two strings s and t, returns boolean representing if t is an anagram of s
    //An anagram is a word/phrase formed by rearranging letters from a different word/phrase
    bool isAnagram(string s, string t) {
        char ch;
        //For each character in s, find instance of the character in t and erase
        //If no instance of character is found, return false
        for (int i = 0; i < s.length(); i++)
        {
            ch = s[i];
            if (t.find(ch) != t.npos)
            {
                t.erase(t.find(ch), 1);
            }
            else
                return false;
        }
        
        //If t is empty after erasing characters from s, t is an anagram, so return true
        //Else return false
        if (t.empty())
            return true;
        else 
            return false;
    }
};