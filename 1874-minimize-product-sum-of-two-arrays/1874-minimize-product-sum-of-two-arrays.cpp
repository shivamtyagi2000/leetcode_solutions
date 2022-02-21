class Solution {
public:
    int minProductSum(vector<int>& nums1, vector<int>& nums2) {
      /*  int ans=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end(),greater<int>());
        for(int i=0;i<nums1.size();i++)
        {
            ans+=nums1[i]*nums2[i];
        }
        return ans;*/
        int ans=0;
        vector<int>a(101,0),b(101,0);
        for(auto i:nums1){
            a[i]++;
        }
        for(auto i:nums2){
            b[i]++;
        }
        int i=1,j=100;
        while(i<=100 and j>=1){
            if(a[i]>0 and b[j]>0){
                int mini=min(a[i],b[j]);
                ans+=(mini*i*j);
                a[i]-=mini,b[j]-=mini;
            }
            if(a[i]==0) i++;
            if(b[j]==0) j--;
        }
        return ans;
    }
};