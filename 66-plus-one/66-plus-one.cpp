class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int cin=1,sum;
        for(int i=digits.size()-1;i>=0;i--)
        {
            sum=digits[i]+cin;
            if(sum>9)
            {
                cin=1;
                sum=sum%10;
            }
            else
                cin=0;
            digits[i]=sum;
        }
        if(cin==1)
        {
            vector<int> ans;
            ans.push_back(1);
            for(int i=0;i<digits.size();i++)
                ans.push_back(digits[i]);
            return ans;
        }
        return digits;
    }
};