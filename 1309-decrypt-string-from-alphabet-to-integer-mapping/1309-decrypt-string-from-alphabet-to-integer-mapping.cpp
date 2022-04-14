class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i=0;i+2<s.size();i++){
            if(s[i+2]=='#'){
                ans+='a'+10*(s[i]-'0')+s[i+1]-'0'-1;
                i+=2;
            }
            else{
                ans+='a'+s[i]-'0'-1;
            }
        }
        if(s[s.size()-1]!='#'&&s[s.size()-2]!='#'){
           { ans+='a'+s[s.size()-2]-'0'-1;
             ans+=+'a'+s[s.size()-1]-'0'-1;
            }
        }
        if(s[s.size()-2]=='#'){
            ans+='a'+s[s.size()-1]-1-'0';
        }
        return ans;
    }
};