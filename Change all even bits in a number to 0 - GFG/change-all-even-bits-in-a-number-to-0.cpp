// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int convertEvenBitToZero(long long int n) {
        // code here
        int temp,count=0;
        long long ans=0,res=0;
        while(n){
            if(count%2==0){
                temp=0;
                ans+=pow(2,count)*temp;
            }
            else{
                temp=n%2;
                ans+=pow(2,count)*temp;
            }
            count++;
            n/=2;
        }
        
        return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.convertEvenBitToZero(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends