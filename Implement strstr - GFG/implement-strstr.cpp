// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}
// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
     if(s.size()<x.size())
     return -1;
     for(int i=0;i<s.size();i++){
         if(x[0]==s[i]&&(i+x.size()-1)<s.size()){
             string temp=s.substr(i,x.size());
             if(temp==x)
             return i;
         }
     }
     return -1;
}