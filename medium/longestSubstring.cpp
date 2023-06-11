class Solution {
public:
    //3. Longest Substring Without Repeating Characters

    //Returns length of longest substring of s without any repeating characters
    int lengthOfLongestSubstring(string s) {
        //map for storing the frequency of each character in s
        map<char, int> freq;
        //Ints for start of substring and maximum substring length
        int start = -1;
        int maxlen = 0;
        for (int i = 0; i < s.length(); i++)
        {
            //If the current char is a repeat (frequency is not 0) then change start position to frequency (number of repeating characters)
            if (freq.count(s[i]) != 0)
            {
                if (start < freq[s[i]])
                    start = freq[s[i]];
            }
            //If current length is greater than max length found, set max length
            freq[s[i]] = i;
            if (i - start > maxlen)
                maxlen = i - start;
        }
        return maxlen;
    }
};