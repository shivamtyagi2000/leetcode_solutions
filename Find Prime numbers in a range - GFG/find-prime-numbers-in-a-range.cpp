// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  int isprime(int x){
      if(x>1){
         for(int i=2;i*i<=x;i++)
         if(x%i==0)
         return 0;
         return 1;
      }
      return 0;
  }
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> ans;
        for(int i=M;i<=N;i++)
        if(isprime(i))
        ans.push_back(i);
        return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}  // } Driver Code Ends