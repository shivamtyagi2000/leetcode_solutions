class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return true;
        int d=0;
        int st=-1,en;
        if(s1.size()!=s2.size())
            return false;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=s2[i])
            {
                d++;
                en=i;
                if(st==-1)
                    st=i;
            }
        }
            if(d>2)
                return false;
            else if(d==2)
            {
                char temp=s1[en];
                s1[en]=s1[st];
                s1[st]=temp;
                
            }
        if(s1==s2)
            return true;
            return false;
                
    }
};