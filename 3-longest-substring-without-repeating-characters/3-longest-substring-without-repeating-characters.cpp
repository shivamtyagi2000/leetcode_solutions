class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0,len=s.size(),left=0,right=0;
        string temp="";
        int chars[128]={0};
        while(right<len){
            chars[s[right]]++;
            while(chars[s[right]]>1)
            {
                chars[s[left]]--;
                left++;
            }
            ans=max(ans,right-left+1);
            right++;
        }
        return ans;
    }
};