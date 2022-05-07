class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int hash[501]={0};
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]+=1;
        }
        for(int i=0;i<501;i++){
            if(hash[i]%2!=0)
                return false;
        }
        return true;
    }
};