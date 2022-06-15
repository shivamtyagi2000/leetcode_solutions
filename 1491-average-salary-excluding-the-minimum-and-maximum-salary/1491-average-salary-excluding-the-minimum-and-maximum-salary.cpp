class Solution {
public:
    double average(vector<int>& salary) {
        double sum=0;
        int ma=INT_MIN,mi=INT_MAX;
        for(int i=0;i<salary.size();i++)
        {
            sum+=salary[i];
            if(salary[i]>ma)
                ma=salary[i];
            if(salary[i]<mi)
                mi=salary[i];
        }
        sum=sum-ma-mi;
        sum/=salary.size()-2;
        return sum;
    }
};