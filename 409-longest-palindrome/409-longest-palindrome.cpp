class Solution {
public:
    int longestPalindrome(string s) {
        int x[52]={0},count=0,flag=0;
        for(int i=0;i<s.size();i++){
            if(s[i]<'a')
                x[s[i]-'A'+'z'-'a'+1]+=1;
            else 
                x[s[i]-'a']+=1;
        }
        for(int i=0;i<52;i++){
           if(x[i]>0){
               if(x[i]%2==1)
                  { count+=(x[i]-1);
                    x[i]=1;
                  }
               else
                   {count+=x[i];
                   x[i]=0;}
           }
        }
        for(int i=0;i<52;i++){
            if(x[i]%2==1)
            {
                count++;
                break;
            }
        }
        return count;
    }
};