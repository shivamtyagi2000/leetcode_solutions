class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0,m=nums.size()-1,mid;
        while(l<=m){
            mid=(l+m)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                m=mid-1;
            else if(nums[mid]<target)
                l=mid+1;
        }
        return -1;
        
    }
};