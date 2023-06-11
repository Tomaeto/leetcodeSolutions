class Solution {
public:
    //509. Fibonacci Number

    //Given an integer n, return the nth value of the Fibonacci sequence
    int fib(int n) {
        if (n < 1) return 0;
        if (n == 1) return 1;
        int sum = fib(n-1) + fib(n-2);
        return sum;
    }
};