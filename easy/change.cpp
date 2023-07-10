class Solution {
public:
    //860. Lemonade Change

    //Given an array bills with payments of $5, $10, or $20 for a $5 lemonade,
    //  return if all customers can be provided with the correct change
    //Keep track of the number of $5 and $10 bills available, use a greedy algorithm to provide change
    //If the amount of fives becomes negative, return false
    bool lemonadeChange(vector<int>& bills) {
        int fives = 0;
        int tens = 0;
        for (int bill : bills) {
            //If customer pays with a $5 bill, add to fives
            if (bill == 5) fives++;
            //If customer pays with a $10 bill, add to tens and take away one five as change
            else if (bill == 10) {
                tens++;
                fives--;
            }
            //Else, customer is paying with a $20 bill
            //If there is a $10 available, give 1 ten and 1 five as change
            else if (tens > 0) {
                tens--;
                fives--;
            }
            //If no tens are available, give 3 fives as change
            else fives -= 3;
            //If the amount of bills for change becomes negative, return false
            if (fives < 0) return false;
        }
        return true;
    }
};
