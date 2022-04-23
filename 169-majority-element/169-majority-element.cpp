class Solution {
public:
    int majorityElement(vector<int>& nums) {
    /*brute force
        int ans=0,curr=0,temp;
        for(int i=0;i<nums.size();i++){
            curr=0;
            temp=nums[i];
            for(int j=0;j<nums.size();j++){
                if(nums[j]==temp)
                    curr++;
            }
            if(curr>(nums.size()/2))
                return temp;
        }
        return -1;*/
        /* using sorting
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
        */
        
        // BEST APPAROCH
        int count=0,ele;
        for(int i=0;i<nums.size();i++){
            if(count==0)
                ele=nums[i];
            if(nums[i]==ele)
                count++;
            else
                count--;
        }
        return ele;
    }
};
