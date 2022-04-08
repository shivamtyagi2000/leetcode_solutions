class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int p=-1,curr=INT_MAX,temp;
        for(int i=0;i<points.size();i++){
            temp=abs(x-points[i][0])+abs(y-points[i][1]);
            if((temp<curr)&&(x==points[i][0]||y==points[i][1]))
               {
                curr=temp;
                p=i;
            }
        }
        return p;
    }
};