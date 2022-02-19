class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxprofit=0;
        int minvalue=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(minvalue>prices[i])
                minvalue=prices[i];
            else
                maxprofit=max(maxprofit,prices[i]-minvalue);
        }
        return maxprofit;
    }
};