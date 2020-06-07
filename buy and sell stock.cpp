class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp=0;
        int minprice=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            minprice=min(minprice,prices[i]);
            maxp=max(maxp,prices[i]-minprice);
        }
        return maxp;
    }
};