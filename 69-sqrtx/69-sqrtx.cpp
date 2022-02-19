class Solution {
public:
    int mySqrt(int x) {
     /*   long long y=0;
        while(y*y<=x)
        {
            y++;
        }
        return y-1;
        */
        //better apporach
            long long s=0,e=INT_MAX,ans;
        while(s<=e)
        {
            long long mid=(s+e)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                s=mid+1;
            }
            else
                e=mid-1;
        }
        return ans;
    }
};