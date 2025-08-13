class Solution {
public:
    int slidingPuzzle(vector<vector<int>>& board) {
        string start="";
        int m=2,n=3;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                start+='0'+board[i][j];
            }
        }
        string goal="123450";
        if(start==goal)
        return 0;
        queue<pair<string,int>> q;
        q.push({start,0});
        unordered_set<string> s={start};
        while(!q.empty()){
            string node=q.front().first;
            int moves=q.front().second;
            q.pop();
            int x[]={1,-1,0,0};
            int y[]={0,0,1,-1};
            int z_index=node.find('0');
            int z_i=z_index/n;
            int z_j=z_index%n;
            for(int i=0;i<4;i++){
                int d_i=z_i+x[i];
                int d_j=z_j+y[i];
                int d_index=(d_i*n)+d_j;
                if(d_i<0 || d_i>=m || d_j<0 || d_j>=n){
                    continue;
                }
                swap(node[z_index],node[d_index]);
                if(node==goal){
                    return moves+1;
                }
                if(!s.count(node)){
                    q.push({node,moves+1});
                    s.insert(node);
                }
                swap(node[z_index],node[d_index]);
            }
        }
        return -1;
    }
};