class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        int k=31;
        while(n){
            ans+=(n&1)<<k;
           n=n>>1;
            k--;
        }
        return ans;
    }
};