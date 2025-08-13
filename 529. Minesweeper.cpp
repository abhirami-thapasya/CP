class Solution {
private:
    int getcount(int r,int c,vector<vector<char>>& board){
        int m=board.size();
        int n=board[0].size();
        int x[]={1,1,1,-1,-1,-1,0,0};
        int y[]={0,1,-1,0,1,-1,1,-1};
        int count=0;
        for(int i=0;i<8;i++){
            int row=r+x[i];
            int col=c+y[i];
            if(row>=0 && row<m && col>=0 && col<n && board[row][col]=='M'){
                count++;
            }
        }
        return count;
    }
    void dfs(int r,int c,vector<vector<char>>& board){
        if(board[r][c]!='E'){
            return;
        }
        int m=board.size();
        int n=board[0].size(); 
        int x[]={1,1,1,-1,-1,-1,0,0};
        int y[]={0,1,-1,0,1,-1,1,-1};
        int count=getcount(r,c,board);
        board[r][c]=count>0?'0'+count:'B';
        if(count==0){
            for(int i=0;i<8;i++){
                int row=r+x[i];
                int col=c+y[i];
                if(row>=0 && row<m && col>=0 && col<n){
                dfs(row,col,board);
                }
            }
        }
        return;
    }
public:
    vector<vector<char>> updateBoard(vector<vector<char>>& board, vector<int>& click) {
        int m=board.size();
        int n=board[0].size();
        if(board[click[0]][click[1]]=='M'){
            board[click[0]][click[1]]='X';
            return board;
        }
        dfs(click[0],click[1],board);
        return board;
    }
};