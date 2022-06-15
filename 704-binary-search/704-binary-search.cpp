class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l,e,mid;
        l=0;
        e=nums.size()-1;
        while(l<=e){
            mid=l+(e-l)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                e=mid-1;
            else
                l=mid+1;
        }
        return -1;
    }
};