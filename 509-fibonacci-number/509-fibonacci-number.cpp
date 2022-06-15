class Solution {
public:
    int fib(int N) {
        //DYNAMIC PROGRAMMING
   /*    if (N <= 1) {
            return N;
        }
                  
        int *cache = new int[N + 1];
        for(int i=0;i<=N;i++)
            cache[i]=0;
        cache[1] = 1;
        for (int i = 2; i <= N; i++) {
            cache[i] = cache[i - 1] + cache[i - 2];
        }
    
        return cache[N]; */
        
        //BEST APPAROCH W/O D.P.
        int a,b,c;
        if(N<=1)
            return N;
        a=0;
        b=1;
        for(int i=2;i<=N;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};