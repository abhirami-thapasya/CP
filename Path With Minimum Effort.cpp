class Solution {
  public:
    int MinimumEffort(int rows, int columns, vector<vector<int>> &heights) {
        // code here
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        pq.push({0,{0,0}});
        int x[]={0,1,0,-1};
        int y[]={1,0,-1,0};
        vector<vector<int>> dis(rows,vector<int>(columns,1e9));
        dis[0][0]=0;
        while(!pq.empty()){
            auto p=pq.top();
            int maxEffort=p.first;
            int row=p.second.first;
            int col=p.second.second;
            pq.pop();
            if(row==rows-1 && col==columns-1){
                return maxEffort;
            }
            for(int i=0;i<4;i++){
                int r=row+x[i];
                int c=col+y[i];
                if(r>=0 && r<rows && c>=0 && c<columns){
                    int diff=max(maxEffort,abs(heights[r][c]-heights[row][col]));
                    if(dis[r][c]>diff){
                        dis[r][c]=diff;
                        pq.push({diff,{r,c}});
                    }
                }
            }
        }
        return 0;
    }
};