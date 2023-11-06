class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& board){
        vis[row][col]=1;
        int m=vis.size();
        int n=vis[0].size();
        int x[]={-1,0,0,1};
        int y[]={0,1,-1,0};
        for(int i=0;i<4;i++){
            int r=row+x[i];
            int c=col+y[i];
            if(r>=0 && c>=0 && r<m && c<n && vis[r][c]==0 && board[r][c]=='O'){
                dfs(r,c,vis,board);
            }
        }
    }
public:
    void solve(vector<vector<char>>& board) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));

        int i=0,j=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]=='O' && vis[i][j]==0 && (i==0 || i==m-1 || j==0 || j==n-1)){
                    dfs(i,j,vis,board);
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && board[i][j]=='O'){
                    board[i][j]='X';
                }
            }
        }
        return;
    }
};