class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        /*approch 1
        sort(nums.begin(),nums.end());
        */
        
       /* approch 2
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
        }*/
        
        //best approch
        int low=0,mid=0,end=nums.size()-1;
        while(mid<=end){
            switch(nums[mid]){
                case 0 :
                    swap(nums[mid++],nums[low++]);
                    break;
                case 1 :
                    mid++;
                    break;
                case 2:
                    swap(nums[mid],nums[end--]);
                    break;
            }
        }
    }
};