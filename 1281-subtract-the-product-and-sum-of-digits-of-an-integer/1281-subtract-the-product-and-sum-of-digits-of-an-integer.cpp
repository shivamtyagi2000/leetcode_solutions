class Solution {
public:
    int subtractProductAndSum(int n) {
        int temp,sum=0,product=1;
        while(n>0){
            temp=n%10;
            sum+=temp;
            product*=temp;
            n/=10;
        }
        return product-sum;
    }
};