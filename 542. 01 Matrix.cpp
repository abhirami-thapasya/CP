class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(m,vector<int> (n,0));
        vector<vector<int>> ans(m,vector<int> (n,0));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
            }
        }
        int x[]={0,-1,0,1};
        int y[]={1,0,-1,0};
        while(!q.empty()){
            int row=q.front().first.first;
            int col=q.front().first.second;
            int prev=q.front().second;
            ans[row][col]=prev;
            q.pop();
            for(int i=0;i<4;i++){
                int r=row+x[i];
                int c=col+y[i];
                if(r>=0 && r<m && c>=0 && c<n && vis[r][c]==0){
                    q.push({{r,c},prev+1});
                    vis[r][c]=1;
                }
            }
        }
        return ans;
    }
};