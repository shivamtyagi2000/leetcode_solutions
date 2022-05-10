class Solution {
public:
    int totalMoney(int n) {
        int count=0,j,i;
        for(i=0;i<n/7;i++){
            for(j=i+1;j<=7+i;j++)
                count+=j;
        }
        j=i;
        for(int k=1;k<=n%7;k++)
            {j++;
             count+=j;
            }
        return count;
    }
};