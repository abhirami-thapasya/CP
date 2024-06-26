class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        int n=arr.size();
        vector<vector<int>> adj(n);
        for(int j=0;j<n;j++){
            if(j+arr[j]<n){
                adj[j].push_back(j+arr[j]);
            }
            if(j-arr[j]>=0){
                adj[j].push_back(j-arr[j]);
            }
        }
        vector<int> vis(n,-1);
        queue<int> q;
        q.push(start);
        vis[start]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(auto it:adj[node]){
                if(arr[it]==0){
                    return true;
                }
                else if(vis[it]==-1){
                    q.push(it);
                    vis[it]=1;
                }
            }
        }
        return false;
    }
};