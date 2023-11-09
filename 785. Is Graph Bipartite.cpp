class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        queue<int> q;
        vector<int> color(n,-1);
        vector<int> vis(n,0);
        color[0]=0;
        for(int i=0;i<n;i++){
            if(vis[i]==1){
                continue;
            }
            else{
                color[i]=0;
                q.push(i);
                while(!q.empty()){
                    int node=q.front();
                    q.pop();
                    for(auto it : graph[node]){
                        if(color[it]==-1){
                            color[it]=!color[node];
                            q.push(it);
                        }
                        else if(color[it]==color[node]){
                            return false;
                        }
                    }
                    vis[node]=1;
                }
            }
        }
        return true;
    }
};