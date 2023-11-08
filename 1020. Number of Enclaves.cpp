class Solution {
private:
    void dfs(int i,int j,vector<vector<int>>& grid,vector<vector<int>>& vis){
        vis[i][j]=1;
        int x[]={-1,0,1,0};
        int y[]={0,1,0,-1};
        int m=vis.size();
        int n=vis[0].size();
        for(int s=0;s<4;s++){
            int row=i+x[s];
            int col=j+y[s];
            if(row>=0 && row<m && col>=0 && col<n && vis[row][col]==0 && grid[row][col]==1){
                dfs(row,col,grid,vis);
            }
        }
    }
public:
    int numEnclaves(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int count=0;
        vector<vector<int>> vis(m,vector<int> (n,0));
        for(int i=0;i<n;i++){
            if(grid[0][i]==1){
                dfs(0,i,grid,vis);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[m-1][i]==1){
                dfs(m-1,i,grid,vis);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[i][0]==1){
                dfs(i,0,grid,vis);
            }
        }
        for(int i=0;i<m;i++){
            if(grid[i][n-1]==1){
                dfs(i,n-1,grid,vis);
            }
        }
        for(int i=1;i<m-1;i++){
            for(int j=1;j<n-1;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    count++;
                }
            }
        }
        return count;
    }
};