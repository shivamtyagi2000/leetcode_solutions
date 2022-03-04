class Solution {
public:
    int countEven(int num) {
        int temp,res,count,ans;
        for(int i=2;i<=num;i++){
            temp=i;
            ans=0;
            while(temp>0){
                res=temp%10;
                temp=temp/10;
                ans=ans+res;
            }
            if(ans%2==0){
                count++;
            }
        }
        return count;
    }
};