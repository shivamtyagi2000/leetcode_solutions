class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int temp1=nums.size()-1;
        for(int i=1;i<nums.size();i++){
            if(abs(nums[i-1])<abs(nums[i]))
               { temp1=i-1;
                 break;
               }
        }
            vector<int> ans;
            int i=temp1-1,j=temp1+1,temp;
            temp=nums[temp1]*nums[temp1];
            ans.push_back(temp);
            while((i>=0)&&(j<=(nums.size()-1))){
                if(abs(nums[i])<abs(nums[j]))
                    {
                        temp=nums[i]*nums[i];
                        ans.push_back(temp);
                        i--;
                    }
                   else
                   {
                        temp=nums[j]*nums[j];
                        ans.push_back(temp);
                        j++;   
                    }
            }
            while(i>=0){
                temp=nums[i]*nums[i];
                        ans.push_back(temp);
                        i--;
            }
            while(j<=(nums.size()-1)){
                 temp=nums[j]*nums[j];
                        ans.push_back(temp);
                        j++;
            }
        return ans;
    }
};