class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int time=0;
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> vis(m,vector<int> (n,0));
        queue<pair<pair<int,int>,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=2;
                }
            }
        }
        while(!q.empty()){
            int a=q.front().first.first;
            int b=q.front().first.second;
            int t=q.front().second;
            q.pop();
            time=max(t,time);
            int x[]={-1,0,0,1};
            int y[]={0,-1,1,0};
            for(int i=0;i<4;i++){
                int row=a+x[i];
                int col=b+y[i];
                if(row>=0 && row<m && col>=0 && col<n && grid[row][col]==1 && vis[row][col]!=2){
                    q.push({{row,col},t+1});
                    vis[row][col]=2;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1 && vis[i][j]!=2){
                    return -1;
                }
            }
        }
        return time;
    }
};