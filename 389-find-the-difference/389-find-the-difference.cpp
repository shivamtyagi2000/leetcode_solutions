class Solution {
public:
    char findTheDifference(string s, string t) {
     vector<int> temp(26,0);
        char x;
        for(int i=0;i<s.size();i++)
            temp[s[i]-'a']+=1;
        for(int i=0;i<t.size();i++)
        {
            temp[t[i]-'a']-=1;
            if(temp[t[i]-'a']<0)
                x=t[i];
        }
        return x;
    }
};