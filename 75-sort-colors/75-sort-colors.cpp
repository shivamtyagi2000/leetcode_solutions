class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count_red=0,count_blue=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                count_red++;
            else if(nums[i]==1)
                count_blue++;
        }
        for(int i=0;i<nums.size();i++){
            if(count_red>0)
            {
                 nums[i]=0;
                count_red--;
            }
            else{
                if(count_blue>0)
                  {
                    nums[i]=1;
                    count_blue--;
                  }
                else
                    nums[i]=2;
            }
        }
    }
};