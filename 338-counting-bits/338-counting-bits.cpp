class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer;
        int rem,ans,temp;
        for(int i=0;i<=n;i++){
            temp=i;
            ans=0;
            while(temp>0){
                rem=temp%2;
                ans+=rem;
                temp/=2;
            }
            answer.push_back(ans);
        }
        return answer;
    }
};