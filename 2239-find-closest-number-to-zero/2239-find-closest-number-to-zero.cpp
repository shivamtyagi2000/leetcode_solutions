class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int curr,ans=INT_MAX;
        for(int i=0;i<nums.size();i++){
            curr=nums[i];
            if(abs(curr)<abs(ans)||curr==abs(ans))
                ans=curr;
        }
        return ans;
    }
};