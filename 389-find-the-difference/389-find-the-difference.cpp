class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> shash(26,0);
        vector<int> thash(26,0);
        char ch;
        for(int i=0;i<s.size();i++)
            shash[s[i]-'a']+=1;
         for(int i=0;i<t.size();i++)
            thash[t[i]-'a']+=1;
        for(int i=0;i<26;i++){
            if(shash[i]!=thash[i])
             ch=i+'a';
        }
        return ch;
    }
};