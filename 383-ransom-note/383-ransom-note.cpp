class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int a[26]={0},b[26]={0};
        for(int i=0;i<magazine.size();i++){
            a[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            b[ransomNote[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]>=b[i])
                continue;
            else
                return false;
        }
        return true;
    }
};