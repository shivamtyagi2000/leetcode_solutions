class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0,i=0,j=0;
        while(i<mat.size()){
            sum+=mat[i][j];
            i++;
            j++;
        }
        i=0;
        j=mat[0].size()-1;
        while(i<mat.size()){
            sum+=mat[i][j];
            i++;
            j--;
        }
        if(mat.size()%2==1)
        {
            int mid=mat.size()/2;
            i=j=mid;
            sum-=mat[i][j];
        }
        return sum;
    }
};