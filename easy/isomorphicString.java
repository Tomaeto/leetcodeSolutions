import java.util.HashMap;
class Solution {
    //205. Isomorphic Strings

    //Returns boolean representing if givens strings s and t are isomorphic
    //Two strings are isomorphic if the characters in s can be replaced to get t
    public boolean isIsomorphic(String s, String t) {
        //If strings are of different lengths, strings cannot be isomorphic, so return false
        if (s.length() != t.length()) return false;

        //HashMap for pairing characters from s and t
        HashMap<Character, Character> charPairs = new HashMap<Character, Character>();
        //Frequency arrays for characters in s and t
        int[] sFreq = new int[256];
        int[] tFreq = new int[256];
        //For each character in s and t, increment correspondning frequency array and create pair in HashMap
        for (int i = 0; i < s.length(); i++) {
            sFreq[s.charAt(i) - 0]++;
            tFreq[t.charAt(i) - 0]++;
            if (charPairs.get(s.charAt(i)) == null)
                charPairs.put(Character.valueOf(s.charAt(i)), Character.valueOf(t.charAt(i)));
        }
        //If any characters at an index in s and t have differing frequencies or the characters are not paired in the HashMap, return false
        for (int i = 0; i < s.length(); i++) {
            if (sFreq[s.charAt(i) - 0] != tFreq[t.charAt(i) - 0] ||
                charPairs.get(Character.valueOf(s.charAt(i))) != Character.valueOf(t.charAt(i)))
                return false;
        }
        //Else, strings are isomorphic, so return true
        return true;
    }
}