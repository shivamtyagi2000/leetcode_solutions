class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st=0,en=numbers.size()-1,temp;
        vector<int> ans;
        while(st<en){
            temp=numbers[st]+numbers[en];
            if(temp==target)
            {
                ans.push_back(st+1);
                ans.push_back(en+1);
                break;
            }
            if(temp>target){
                en--;
            }
            if(temp<target){
                st++;
            }
        }
            return ans;                  
    }
};