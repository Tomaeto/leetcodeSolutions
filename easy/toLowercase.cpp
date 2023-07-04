class Solution {
public:
    //709. To Lowercase

    //Given a string s, return the string with all uppercase letter changed to lowercase
    string toLowerCase(string s) {
        string ans = "";
        //ASCII code 91 is the end of uppercase characters, so add 32 to get corresponding lowercase letter
        for (char ch : s) {
            if (ch < 91 && isalpha(ch)) ch += 32;
            ans += ch;
        }
        return ans;
    }
};
