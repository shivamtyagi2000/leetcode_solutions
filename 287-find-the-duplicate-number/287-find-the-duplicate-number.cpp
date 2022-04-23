class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       /*brute force
       sort(nums.begin(),nums.end());
        int i;
        for(i=0;i<nums.size();i++)
            if(nums[i]==nums[i+1])
                break;
        return nums[i];*/
        
        /* extra space
        vector<int> ans(nums.size()+1,0);
        int temp;
        for(int i=0;i<nums.size();i++){
            temp=nums[i];
            ans[temp]+=1;
            if(ans[temp]>1)
               break;
        }
        return temp;
        */
        
        // BEST approach
        int slow,fast;
        slow=fast=nums[0];
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);
        fast=nums[0];
        while(slow!=fast){
            slow=nums[slow];
            fast=nums[fast];
        }
        return slow;
    }
};