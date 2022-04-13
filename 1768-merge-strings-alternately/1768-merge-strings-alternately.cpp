class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0,k=0;
        string ans="";
        while(i<word1.size()&&j<word2.size()){
            if(k%2==0)
                ans+=word1[i++];
            else
                ans+=word2[j++];
            k++;
    }
        while(i<word1.size())
            ans+=word1[i++];
        while(j<word2.size())
            ans+=word2[j++];
        return ans;
    }
};