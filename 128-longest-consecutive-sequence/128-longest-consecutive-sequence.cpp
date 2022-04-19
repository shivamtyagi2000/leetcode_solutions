class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size())
        {
            int ans=1,curr=1;
            sort(nums.begin(),nums.end());
            for(int i =0;i+1<nums.size();i++){
            if(nums[i+1]==nums[i]+1)
                curr++;
                else if(nums[i+1]==nums[i])
                    continue;
            else
                curr=1;
            ans=max(ans,curr);
                }
            return ans;
        }
        return 0;
    }
};