class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> hashs1(26,0);
        vector<int> hashs2(26,0);
        int s1len=s1.size();
        int s2len=s2.size();
        if(s1len>s2len)
            return false;
        int left=0,right=0;
        while(s1len>right){
            hashs1[s1[right]-'a']+=1;
            hashs2[s2[right]-'a']+=1;
            right++;
        }
       right--;
        while(right<s2len){
            if(hashs1==hashs2)
                return true;
            right++;
            if(right<s2len)
            hashs2[s2[right]-'a']+=1;
            hashs2[s2[left]-'a']-=1;
            left++;
        }
        return false;
        
    }
};