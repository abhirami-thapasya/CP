class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        pq.push({grid[0][0],{0,0}});
        int n=grid.size();
        vector<vector<int>> dis(n,vector<int>(n,1e9));
        int x[]={0,1,0,-1};
        int y[]={1,0,-1,0};
        dis[0][0]=grid[0][0];
        while(!pq.empty()){
            auto p=pq.top();
            pq.pop();
            int diff=p.first;
            int row=p.second.first;
            int col=p.second.second;
            if(row==n-1 && col==n-1){
                return diff;
            }
            for(int i=0;i<4;i++){
                int r=row+x[i];
                int c=col+y[i];
                if(r>=0 && r<n && c>=0 && c<n){
                    int elevn=max(diff,grid[r][c]);
                    if(dis[r][c]>elevn){
                        dis[r][c]=elevn;
                        pq.push({elevn,{r,c}});
                    }
                }
            }
        }
        return 0;
    }
};