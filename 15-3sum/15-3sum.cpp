class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int tsum,l,e;
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<nums.size();i++){
            l=i+1;
            e=nums.size()-1;
            while(l<e){
                if(nums[l]+nums[e]+nums[i]>0)
                    e--;
                else if(nums[l]+nums[e]+nums[i]<0)
                    l++;
               else
                {
                    vector<int> temp(3,0);
                    temp[0]=nums[i];
                    temp[1]=nums[l];
                    temp[2]=nums[e];
                    ans.push_back(temp);
                    while(l<e&&temp[1]==nums[l])
                            l++;
                }
            }
            while(i+1<nums.size()&&nums[i+1]==nums[i])
                    i++;
        }
        return ans;
    }
};