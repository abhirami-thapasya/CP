class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n= grid.size();
        if(grid[0][0] || grid[n-1][n-1]){
            return -1;
        }
        if(n==1){
            return 1;
        }
        queue<pair<int,pair<int,int>>> q;
        q.push({1,{0,0}});
        vector<vector<int>> dis(n,vector<int>(n,1e9));
        dis[0][0]=1;
        int x[]={0,1,0,-1,1,-1,1,-1};
        int y[]={1,0,-1,0,1,1,-1,-1};
        while(!q.empty()){
            pair<int,pair<int,int>> p=q.front();
            q.pop();
            int dist=p.first;
            int row=p.second.first;
            int col=p.second.second;
            for(int i=0;i<8;i++){
                int r=row+x[i];
                int c=col+y[i];
                if(r>=0 && r<n && c>=0 && c<n && grid[r][c]==0 && dis[r][c]>dist+1){
                    if(r==n-1 && c==n-1){
                        return dist+1;
                    }
                    dis[r][c]=dist+1;
                    q.push({dist+1,{r,c}});
                }
            }
        }
        return -1;
    }
};