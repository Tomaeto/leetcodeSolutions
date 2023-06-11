class Solution {
public:
    //844. Backspace String Compare

    //Given strings s and t, returns boolean representing if both would be equal after implementing backspaces
    //'#' represents backspace in each string
    //Note: backspacing empty string keeps it empty
    bool backspaceCompare(string s, string t) {
        //stacks for storing characters from s and t
        stack<char> stacks;
        stack<char> stackt;

        //For each character in s and t, if character is a backspace than pop top character
        //Else push character onto stack
        for (char ch : s) {
            if (ch == '#') {
                if (!stacks.empty()) stacks.pop();
            }
            else stacks.push(ch);
        }
        for (char ch : t) {
            if (ch == '#') {
                if (!stackt.empty()) stackt.pop();
            }
            else stackt.push(ch);
        }
        //Comparing each character in each stack after implementing backspaces
        //If top characters are not equal, return false
        //Else pop both stacks
        while (!stacks.empty() && !stackt.empty()) {
            if (stackt.top() != stacks.top()) return false;
            stacks.pop();
            stackt.pop();
        }
        //If both stacks are empty afterwards, strings were equal, so return true
        return (stacks.empty() && stackt.empty());

    }
};