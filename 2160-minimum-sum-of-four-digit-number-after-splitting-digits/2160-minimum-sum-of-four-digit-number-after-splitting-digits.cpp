class Solution {
public:
    int minimumSum(int num) {
        vector<int> temp;
        while(num){
            temp.push_back(num%10);
            num/=10;
        }
        sort(temp.begin(),temp.end());
        int ans=0,low,high;
        low=0;
        high=temp.size()-1;
        while(low<high){
            ans+=(10*temp[low]+temp[high]);
            low++;
            high--;
        }
        return ans;
    }
};