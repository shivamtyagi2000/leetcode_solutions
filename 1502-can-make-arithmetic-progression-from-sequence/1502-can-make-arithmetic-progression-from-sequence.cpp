class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());bool in=true,de=true;
        int d=arr[1]-arr[0],temp;
        for(int i=2;i<arr.size();i++){
            temp=arr[i]-arr[i-1];
            if(d!=temp)
                in=false;
        }
        sort(arr.begin(),arr.end(),greater<int>());
        d=arr[1]-arr[0];
        for(int i=2;i<arr.size();i++){
            temp=arr[i]-arr[i-1];
            if(d!=temp)
                de=false;
        }
        return (in||de);
    }
};