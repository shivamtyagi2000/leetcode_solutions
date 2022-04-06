class Solution {
public:
    double average(vector<int>& salary) {
        double temp=0;
        int s=0;
        int max=INT_MIN,min=INT_MAX;
        for(int i=0;i<salary.size();i++){
            if(salary[i]>max)
                max=salary[i];
            if(salary[i]<min)
                min=salary[i];
            temp+=salary[i];
            s++;
        }
        temp=temp-max-min;
        s=s-2;
        temp=temp/s;
        return temp;
    }
};