class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        int temp;
        if(nums1.size()>0)
        {
            for(int i=0;i<nums1.size();i++){
                for(int j=0;j<nums2.size();j++){
                    if(nums1[i]==nums2[j])
                    {
                        int x=-1;
                        while(j<nums2.size()){
                            if(nums1[i]<nums2[j])
                               { x=nums2[j];
                               break;
                               }
                            j++;
                        }
                        ans.push_back(x);
                    }
                }
            }
        }
        return ans;
    }
};