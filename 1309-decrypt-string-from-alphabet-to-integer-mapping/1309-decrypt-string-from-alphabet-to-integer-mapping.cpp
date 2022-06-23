class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        int i=0;
        while(i<s.size()){
            if(i+2<s.size()&&s[i+2]=='#'){
                ans+=((s[i]-'0')*10+s[i+1]-'0'+'a'-1);
                i+=3;}
                else
                    ans+=(s[i++]-'1'+'a');
            
        }
        return ans;
    }
};