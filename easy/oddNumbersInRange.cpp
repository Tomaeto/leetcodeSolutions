class Solution {
public:
    //1523. Count Odd Numbers in Range

    //Given integers low and high, return count of odd numbers between low and high (inclusive)
    //Number of odd numbers within the range is half of the size of the range, not inclusive
    //Add one if either bound is odd
    int countOdds(int low, int high) {
        int odds = (low % 2) || (high % 2);
        odds += (high - low) / 2;
        return odds;
    }
};
