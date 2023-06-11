class Solution {
public:
    //121. Best Time to Buy and Sell Stock

    //When given an array of prices of a given stock on each day, returns maximum profit possible from buying and selling a stock
    //If no profit is possible, returns 0
    int maxProfit(vector<int>& prices) {
        //Initialize lowest price to maximum integer, difference in value to 0, and profit to 0
        int lowest = INT_MAX;
        int diff = 0;
        int profit = 0;
        
        //For each entry in prices, if the price is less than the current lowest value, set lowest
        //update difference to be the difference between the current price and lowest price
        //If profit is less than the difference, update profit
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < lowest) {
                lowest = prices[i];
            }
            diff = prices[i] - lowest;
            if (profit < diff) {
                profit = diff;
            }
        }
        return profit;
    }
};