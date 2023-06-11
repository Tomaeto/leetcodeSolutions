class Solution {
    //392. Is Subsequence
    //for given strings s and t, returns boolean representing if s is a subsequence of t
    public boolean isSubsequence(String s, String t) {
        //Initialize pointer for iterating through s
        int sPointer = 0;
        //If s is empty, return true
        if (s.isEmpty()) return true;
        //If s is longer than t, return false
        if (s.length() > t.length()) return false;
        //For each character in t, if the corresponding character in s is equal, increment sPointer
        for (int i = 0; i < t.length(); i++) {
            if (t.charAt(i) == s.charAt(sPointer))
                sPointer++;
            
            //If sPointer is equal to the length of s, s is fully a subsequence of t, so return true
            if (sPointer == s.length())
            return true;
        }
        //If all of s is not a subsequence of t, return false
        return false;
    }
}