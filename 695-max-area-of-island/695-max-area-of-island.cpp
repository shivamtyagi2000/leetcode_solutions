class Solution {
public:
    int dfs(vector<vector<int>>& grid,int r,int c){
        int ans=0;
        if(grid[r][c])
            {
            ans++;
            grid[r][c]=0;
            if(r>=1)
                ans+=dfs(grid,r-1,c);
            if(c>=1)
                ans+=dfs(grid,r,c-1);
            if(r+1<grid.size())
                ans+=dfs(grid,r+1,c);
             if(c+1<grid[0].size())
                ans+=dfs(grid,r,c+1);}
        return ans;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int max=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
               { 
                    int temp=dfs(grid,i,j);
                    if(max<temp)
                    max=temp;
                }
            }
        }
        return max;
    }
};