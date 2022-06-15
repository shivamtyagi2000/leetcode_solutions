class Solution {
public:
    int tribonacci(int n) {
        if(n<=1)
            return n;
        int *table=new int[n+1];
        for(int i=0;i<=n;i++)
            table[i]=0;
        table[1]=1;
        table[2]=1;
        for(int i=3;i<=n;i++)
            table[i]=table[i-1]+table[i-2]+table[i-3];
        return table[n];
    }
    
};