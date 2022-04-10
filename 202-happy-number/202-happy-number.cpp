class Solution {
public:
    int next(int n){
        int s=0,temp;
        while(n){
            temp=n%10;
            n/=10;
            s+=temp*temp;
        }
        return s;
    }
    bool isHappy(int n) {
        int fast=next(n),slow=n;
        while(fast!=1&&fast!=slow){
            slow=next(slow);
            fast=next(next(fast));
        }
        return fast==1;
    }
};