class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++){
            int low=0,high=arr2.size()-1,mid;
            while(low<=high){
                mid=(low+high)/2;
                if(arr1[i]-arr2[mid]>d)
                   low=mid+1;
                else if(arr1[i]-arr2[mid]<-d)
                    high=mid-1;
                else
                {
                    count++;
                    break;
                }
            }
        }
        return arr1.size()-count;
    }
};