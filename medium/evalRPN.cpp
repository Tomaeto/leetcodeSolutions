class Solution {
public:
    //150. Evaluate Reverse Polish Notation

    //Evaluates arithmetic expression stored in tokens array in reverse polish notation (postfix)
    //Places values onto a stack, pops top two and performs operation if operand is the current token
    int evalRPN(vector<string>& tokens) {
        //Stack for storing integer values
        stack<int> vals;
        //Integers for two values popped from stack and current value
        int val1;
        int val2;
        int curVal;
        for (int i = 0; i < tokens.size(); i++)
        {
            //If token is not an operand, convert to int and push onto stack
            if (tokens[i] != "/" && tokens[i] != "*" && tokens[i] != "+"
               && tokens[i] != "-")
                vals.push(stoi(tokens[i]));

            //Else pop top two values into corresponding variables, perform token's operation, and push solution onto stack
            else
            {
                val2 = vals.top();
                vals.pop();
                val1 = vals.top();
                vals.pop();
                if (tokens[i] == "+")
                    curVal = val1 + val2;
                else if (tokens[i] == "-")
                    curVal = val1 - val2;
                else if (tokens[i] == "*")
                    curVal = val1 * val2;
                else if (tokens[i] == "/")
                    curVal = val1 / val2;
                vals.push(curVal);
            }
        }
        //Return value on top of stack after all operations are performed
        return vals.top();
    }
};