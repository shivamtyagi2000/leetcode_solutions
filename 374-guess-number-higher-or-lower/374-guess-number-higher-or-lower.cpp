/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l=1,mid,e=n;
        while(l<=e){
            mid=l+(e-l)/2;
            if(guess(mid)==0)
                return mid;
            else if(guess(mid)==1)
                l=mid+1;
            else if(guess(mid)==-1)
                e=mid-1;
        }
        return -1;
    }
};