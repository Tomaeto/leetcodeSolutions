class Solution {
public:
    //20. Valid Parenthesis

    //Returns boolean representing if string s has a valid set of parenthesis characters (matching opening and closing brackets)
    //Note: s ONLY contains brackets
    bool isValid(string s) {
        //Stack for storing brackets from s and the current character
        stack<char> brackets;
        char currChar;
        for (auto it = s.begin(); it != s.end(); it++)
        {
            currChar = *it;
            //If current character is an open bracket, push onto stack
            if (currChar == '(' || currChar == '[' || currChar == '{')
                brackets.push(currChar);
            
            //If current character is a closing bracket, return false if stack is empty or top of stack is not a matching open bracket
            //Otherwise pop stack
            if (currChar == ')')
            {
                if (brackets.empty() || currChar - 1 != brackets.top())
                    return false;
                else brackets.pop();
            }
            
            if (currChar == ']' || currChar == '}')
            {
                if (brackets.empty() || currChar - 2 != brackets.top())
                    return false;
                else brackets.pop();
            }
        }
        
        //If stack is empty after looping through string, all open brackets have a matching closing bracket, meaning string is valid
        return brackets.empty();
    }
};