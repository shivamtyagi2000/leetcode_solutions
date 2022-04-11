class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=INT_MIN,curr;
        for(int i=0;i<accounts.size();i++){
            curr=0;
            for(int j=0;j<accounts[0].size();j++){
                curr+=accounts[i][j];
            }
            if(max<curr)
                max=curr;
        }
        return max;
    }
};