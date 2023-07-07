class Solution {
public:
    //1672. Richest Customer Wealth

    //Given an m x n array accounts where accounts[i][j] is the money the ith person has in the jth bank,
    //  return the wealth of the richest customer.
    //Sums up the total amount a customer has and stores greatest wealth
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        int temp;
        for (auto bank : accounts) {
            temp = 0;
            for (auto money : bank) temp += money;
            wealth = max(wealth, temp);
        }
        return wealth;
    }
};
