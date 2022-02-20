class Solution {
public:
    bool isPalindrome(string s) {
        string temp;
        int k,l;
        for(int i=0;i<s.size();i++)
        {
            char t;
            if(s[i]>='A'&&s[i]<='Z')
                {t=s[i]-'A'+'a';
                temp+=t;}
            else if(s[i]>='a'&&s[i]<='z')
                {t=s[i];
                temp+=t;}
            else if(s[i]>='0'&&s[i]<='9')
                {t=s[i];
                temp+=t;}
        }
        k=0;
        l=temp.size()-1;
        while(k<l)
        {
            if(temp[k]!=temp[l])
                return false;
            k++;
            l--;
        }
        return true;
    }
};