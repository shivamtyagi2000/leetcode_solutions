class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size())
            return false;
        vector StoT(256,-1);
        vector TtoS(256,-1);
        char c1,c2;
        for(int i=0;i<s.size();i++){
            c1=s[i];
            c2=t[i];
            if(StoT[c1]==-1&&TtoS[c2]==-1)
            {
                StoT[c1]=c2;
                TtoS[c2]=c1;
            }
            else if(!(StoT[c1]==c2&&TtoS[c2]==c1))
                return false;
        }
        return true;
    }
};