

int lengthOfLongestSubstring(char * s){
    int l=0,si=strlen(s),e=0,ans=0;
    int chars[128]={0};
    while(e<si){
        chars[s[e]]++;
        while(chars[s[e]]>1){
            chars[s[l]]--;
            l++;
        }
        if(ans<(e-l+1))
            ans=e-l+1;
        e++;
    }
return ans;
}