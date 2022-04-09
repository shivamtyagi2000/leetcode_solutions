class Solution {
public:
    string reverseWords(string s) {
        int st=0,en=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                en++;
            else{
                while(st<en){
                    char temp=s[en];
                    s[en]=s[st];
                    s[st]=temp;
                    st++;
                    en--;
                }
                 st=en=i;
                st++;
               
            }
        }
        while(st<en){
                    char temp=s[en];
                    s[en]=s[st];
                    s[st]=temp;
                    st++;
                    en--;
                }
        return s;
    }
};