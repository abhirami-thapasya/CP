class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> source,
                     pair<int, int> destination) {
        // code here
        if(source==destination){
            return 0;
        }
        queue<pair<int,pair<int,int>>> q;
        q.push({0,source});
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dis(n,vector<int> (m,1e9));
        dis[source.first][source.second]=0;
        int x[]={1,0,-1,0};
        int y[]={0,1,0,-1};
        while(!q.empty()){
            pair<int,pair<int,int>> p=q.front();
            q.pop();
            int dist=p.first;
            pair<int,int> node=p.second;
            int a=node.first;
            int b=node.second;
            for(int i=0;i<4;i++){
                int X=a+x[i];
                int Y=b+y[i];
                if(X>=0 && X<n && Y>=0 && Y<m && grid[X][Y]==1){
                    if(dist+1<dis[X][Y]){
                        dis[X][Y]=dist+1;
                        if(X==destination.first && Y==destination.second){
                            return dist+1;
                        }
                        q.push({dist+1,{X,Y}});
                    }
                }
            }
        }
        return -1;
    }
};