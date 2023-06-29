class Solution {
public:
    //202. Happy Number

    //Given integer n, determine if n is a happy number
    //A happy number is a number that will eventually equal 1 after summing the squares of its digits repeatedly
    
    //Recursively checks if the squared sums of n are happy
    //1 and 7 are the only single-digit values that are happy, so if n reaches a different single-digit value,
    //  it cannot be happy
    bool isHappy(int n) {
        if (n == 1 || n == 7) return true;
        if (n > 1 && n < 10) return false;
        string nstr = to_string(n);
        int sum = 0;
        for (char ch : nstr) {
            sum += pow(ch - '0', 2);
        }
        return isHappy(sum);
    }
};
