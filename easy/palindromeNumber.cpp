#include <string>
class Solution {
public:
    //9. Palindrome Number

    //Returns boolean representing if x is a palindromic number
    bool isPalindrome(int x) {
        //If x is negative or ends w/ a zero, return false
        if (x < 0 || (x != 0 && x % 10 == 0)) return false;

        //checking half the digits of x
        int half = 0;
        //While x is greater than the half digits, add the last digit to half and divide x by 10 to remove the digit
        //After loop, half contains the first half of the original value's digits and x contains the other half
        while (x > half) {
            half = half * 10 + x % 10;
            x /= 10;
        }

        //Return if the halves are equal
        //If x is odd, then divide half by 10 to remove the middle digit
        return x == half || x == half / 10;
    }
};