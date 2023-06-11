class Solution {
public:
    //125. Valid Palindrome

    //returns boolean representing if string s is a palindrome after removing all non-alphanumeric characters
    bool isPalindrome(string s) {
        //string for storing only the alphanumeric characters from s
      string alpha;
      for (int i = 0; i < s.length(); i++)
      {
        //Add each alphanumeric character in s to alpha and convert to lowercase
          if (isalnum(s[i]))
              alpha += tolower(s[i]);
      }
        
        //initialize front and back pointers for alpha
        //If alpha is empty, return true
      int front = 0;
      int back = alpha.length() - 1;
        if (alpha.length() == 0)
            return true;
    
    //Iterate through alpha using two pointers
    //If front and back pointers do not point to the same character, return false
      while (front < back)
      {
          if (alpha[front] != alpha[back])
              return false;
          front++;
          back--;
      }
      //If front and back pointers always point to the same character until they cross, string is a palindrome, so return true
        return true;
    }
};