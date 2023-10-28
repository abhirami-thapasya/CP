class Solution {
private:
    void bfs(int r,int c,vector<vector<char>>& grid,vector<vector<int>>& vis){
        queue<pair<int,int>> st;
        vis[r][c]=1;
        st.push({r,c});
        int n=grid.size();
        int m=grid[0].size();
        while(!st.empty()){
            int row=st.front().first;
            int col=st.front().second;
            st.pop();
            vector<int> x={-1,0,0,1};
            vector<int> y={0,1,-1,0};
            for(int i=-0;i<4;i++){
                int Nrow=row+x[i];
                int Ncol=col+y[i];
                if(Nrow>=0 && Nrow<n && Ncol>=0 && Ncol<m && grid[Nrow][Ncol]=='1' && vis[Nrow][Ncol]==0){
                    vis[Nrow][Ncol]=1;
                    st.push({Nrow,Ncol});
                }
            }
        }
        return;
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size(),count=0,m=grid[0].size();
        vector<vector<int>> vis(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='1' && vis[i][j]==0){
                    count++;
                    bfs(i,j,grid,vis);
                }
            }
        }
        return count;
    }
};