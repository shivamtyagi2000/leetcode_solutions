class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int temp=nums.size()-1;
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i-1])<abs(nums[i]))
                {temp=i-1;
                 break;}
        }
        int i=temp-1,j=temp+1;
        ans.push_back(nums[temp]*nums[temp]);
        while(i>=0&&j<=nums.size()-1){
            if(abs(nums[i])<abs(nums[j]))
            {
                ans.push_back(nums[i]*nums[i]);
                i--;
            }
            else
            {
                ans.push_back(nums[j]*nums[j]);
                j++;
            }
        }
        while(i>=0){
            ans.push_back(nums[i]*nums[i]);
            i--;
        }
        while(j<=nums.size()-1){
            ans.push_back(nums[j]*nums[j]);
            j++;
        }
        return ans;
    }
};