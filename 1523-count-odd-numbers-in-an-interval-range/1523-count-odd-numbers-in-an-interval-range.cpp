class Solution {
public:
    int countOdds(int low, int high) {
        int k=(high-low)/2;
        if(low%2||high%2)
            return k+1;
        return k;
    }
};