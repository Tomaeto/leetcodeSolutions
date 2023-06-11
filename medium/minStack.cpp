class MinStack {
public:
    //155. Min Stack

    //Implementation of a  MinStack class that retrieves the minimum element in the stack at a constant time
    //Stack for storing values
    stack<int> stacke;
    MinStack() {
        
    }
    
    //Function for pushing a value onto the stack
    void push(int val) {
        stacke.push(val);
    }
    
    //Function for popping the value on top of the stack
    void pop() {
        stacke.pop();
    }
    

    //Function for getting the top value of the stack
    int top() {
        return stacke.top();
    }
    

    //Function for getting the minimum value in the stack with constant runtime
    //Iterates through a copy of the stack and returns the minimum value found
    int getMin() {
        int minVal = INT_MAX;
        stack<int> tempStack = stacke;
        while(!tempStack.empty())
        {
            if (tempStack.top() < minVal)
                minVal = tempStack.top();
            tempStack.pop();
        }
        return minVal;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */