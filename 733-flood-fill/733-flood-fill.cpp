class Solution {
public:
    void dfs(vector<vector<int>> &image,int r,int c,int temp,int color){
        if(temp==image[r][c]){
            image[r][c]=color;
            if(r>=1)dfs(image,r-1,c,temp,color);
            if(c>=1)dfs(image,r,c-1,temp,color);
            if(r<image.size()-1)dfs(image,r+1,c,temp,color);
            if(c<image[0].size()-1)dfs(image,r,c+1,temp,color);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int temp=image[sr][sc];
        if(temp!=color)
            dfs(image,sr,sc,temp,color);
        return image;
    }
};