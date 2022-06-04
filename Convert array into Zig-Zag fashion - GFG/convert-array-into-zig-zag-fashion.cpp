// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Program for zig-zag conversion of array
	void zigZag(int arr[], int n) {
	    // code here
	    int mi,ma,flag=0;
	    for(int i=0;i<n-1;i++){
	        mi=min(arr[i],arr[i+1]);
	        ma=max(arr[i],arr[i+1]);
	        if(flag==0){
	            arr[i]=mi;
	            arr[i+1]=ma;
	            flag=1;
	            continue;
	        }
	        if(flag==1){
	            arr[i]=ma;
	            arr[i+1]=mi;
	            flag=0;
	            continue;
	        }
	    }
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.zigZag(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
  // } Driver Code Ends