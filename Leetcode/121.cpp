class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        int profit = 0;
        int buyday = INT.MAX;
        int index;
        for (int i = 0; i < n; i++)
        {
            if (prices[i] < buyday)
            {
                buyday = prices[i];
                index = i;
            }
        }
        for (int i = index; i < n; i++)
        {
            profit = max(profit, prices[i] - buyday);
        }
        return profit;
    }
};