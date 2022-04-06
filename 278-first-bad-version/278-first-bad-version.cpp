// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low=1,high=n,mid;
        while(low<high){
            mid=(low)/2+(high)/2;
            if(isBadVersion(mid)&&!isBadVersion(mid-1))
                return mid;
            else if(!isBadVersion(mid))
                low=mid+1;
            else if(isBadVersion(mid))
                high=mid-1;
        }
            return low;
    }
};