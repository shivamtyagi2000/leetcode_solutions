// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=1,e=n,mid;
        while(l<=e){
            mid=l+(e-l)/2;
            if(isBadVersion(mid)&&!isBadVersion(mid-1))
                return mid;
            else if(isBadVersion(mid)&&isBadVersion(mid-1))
                e=mid-1;
            else
                l=mid+1;
        }
        return 1;
    }
};