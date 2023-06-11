
class MyQueue {
public:
    //232. Implement Queue Using Stacks

    //Implements a queue using stack objects
    //Stacks for storing and moving values
    //s1 is used for holding values after operation, s2 used for moving values during operations
    //After each operation, s1 holds all values in the "queue" and s2 is empty
    stack<int> s1;
    stack<int> s2;
    MyQueue() {

    }
    
    //Function for pushing value into "queue"
    void push(int x) {
        //Moving all values from s1 into s2, pushing value onto bottom of s1, and moving values back into s1
        //Results in x being put at the bottom of s1
        while (!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }
        s1.push(x);
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
        
    }
    
    //Pops value from top of "queue" and returns value
    int pop() {
        int val = s1.top();
        s1.pop();
        return val;
    }
    
    //Returns value from top of "queue"
    int peek() {
        return s1.top();
    }
    
    //Returns if "queue" is empty
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */