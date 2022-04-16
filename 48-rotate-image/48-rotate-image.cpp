class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       
       int n=matrix.size(),temp;
        /*brute force
        vector<vector<int>> ans(n,vector<int> (n,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
               ans[j][n-i-1]=matrix[i][j]; 
            }
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                matrix[i][j]=ans[i][j];
                */
        //best approach
        // transpose+ reverse row
        for(int i=0;i<n;i++)
            for(int j=0;j<i;j++)
            {
                temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        
      for(int i=0;i<n;i++)
        {
            int l=0,e=n-1;
            while(l<e){
                temp=matrix[i][e];
                matrix[i][e]=matrix[i][l];
                matrix[i][l]=temp;
                l++;
                e--;
            }
        }
    }
};