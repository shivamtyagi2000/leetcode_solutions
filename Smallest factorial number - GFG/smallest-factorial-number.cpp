// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        int check(int x,int n){
            int ans=0,j=5;
            while(x>=j){
                ans+=x/j;
                j*=5;
            }
            return (ans>=n);
        }
        int findNum(int n)
        {
        //complete the function here
        int l=0,e=5*n,mid;
        if(n==1)
        return 5;
        while(l<e){
            mid=(l+e)/2;
            if(check(mid,n))
            e=mid;
            else
            l=mid+1;
        }
        return l;
        }
};

// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends