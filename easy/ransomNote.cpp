class Solution {
public:
    //383. Ransom Note

    //Given two strings ransomNote and magazine, return boolean representing if ransomNote can be constructed using letters from magazine
    bool canConstruct(string ransomNote, string magazine) {
        //Map for storing frequency of each character in magazine
        map<char, int> entries;

        //Filling frequency map with frequency of each character in magazine
        for (int i = 0; i < magazine.length(); i++)
        {
            if (entries.find(magazine[i]) == entries.end())
                entries[magazine[i]] = 1;
            else
                entries[magazine[i]]++;
        }
        //For each character in ransomNote, decrement corresponding frequency in the map
        //If character is not in map or frequency reaches -1, return false
        for (int i = 0; i < ransomNote.length(); i++)
        {
            if (entries.find(ransomNote[i]) == entries.end() || 
               entries[ransomNote[i]] == 0)
                return false;
            else
                entries[ransomNote[i]]--;
        }
        //If all characters have high enough frequencies, return true
        return true;
    }
};