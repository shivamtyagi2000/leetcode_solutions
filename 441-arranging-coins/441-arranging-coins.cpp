class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        while(n>=0)
        {
            count++;
            n-=count;
        }
        return --count;
    }
};