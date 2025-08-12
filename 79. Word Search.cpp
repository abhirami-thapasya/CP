class Solution {
public:
    bool dfs(int row,int col,vector<vector<int>> &vis,vector<vector<char>> &board,string word,int index){ 
        if(index+1==word.size()){
            return true;
        }
        int m=vis.size();
        int n=vis[0].size();
        vis[row][col]=1;
        int x[]={1,-1,0,0};
        int y[]={0,0,1,-1};
        for(int i=0;i<4;i++){
            int r=row+x[i];
            int c=col+y[i];
            if(r>=0 && r<m && c>=0 && c<n && board[r][c]==word[index+1] && vis[r][c]!=1){
                if(dfs(r,c,vis,board,word,index+1))
                return true;
            }
        }
        vis[row][col]=0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        vector<vector<int>> vis(m,vector<int>(n,0));
        queue<pair<int,int>> q;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==word[0])
                if(dfs(i,j,vis,board,word,0))
                return true;
            }
        }
        return false;
    }
};