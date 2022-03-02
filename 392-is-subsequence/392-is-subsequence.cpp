class Solution {
public:
    bool isSubsequence(string s, string t) {
         int i=0,j=s.size()-1;
            int k=0,l=t.size()-1;
        int count=0;
        if(s.size()>t.size()){
            return false;
        }
        else{
           
            while(i<=j&&k<=l){
                if(s[i]==t[k]){
                    i++;
                    count++;
                    k++;
                }
                else if(s[i]!=t[k]){
                    k++;
                }
            }
            if(count==s.size())
                return true;
            
            return false;
            
        }
    }
};