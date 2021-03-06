class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c,0)); 
        int col=mat[0].size();
        if(r*c!=col*mat.size())
            return mat;
        for(int i=0;i<r*c;i++)
        {
            ans[i/c][i%c]=mat[i/col][i%col];
        }
        return ans;
    }
};