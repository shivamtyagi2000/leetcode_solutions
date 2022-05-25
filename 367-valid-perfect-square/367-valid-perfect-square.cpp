class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num<2)
            return true;
        long low=2,high=num/2,mid,guess;
        while(low<=high){
            mid=(low+high)/2;
            guess=mid*mid;
            if(guess==num)
                return true;
            else if(guess<num)
                low=mid+1;
            else
                high=mid-1;
        }
        return false;
    }
};