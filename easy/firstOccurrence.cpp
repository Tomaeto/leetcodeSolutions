class Solution {
public:
    //28. Find the Index of the First Occurrence in a String

    //Returns index of the first occurrence of string needle in string haystack
    int strStr(string haystack, string needle) {

        //For each char in haystack, if char equals the start of needle, check if characters after equal the rest of needle
        //If true, return index of starting character
        for (int i = 0; i < haystack.length(); i++) {
            if (haystack[i] == needle[0]) {
                int j = i + 1;
                int k = 1;
                while (j < haystack.length() && k < needle.length() && haystack[j] == needle[k]) {
                     j++;
                     k++;
                }
                if (k == needle.length()) return i;
            }
        }
        //If no instance of needle was found, return -1
        return -1;
    }
};