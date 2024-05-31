class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ind(numCourses,0);
        queue<int> q;
        vector<int> ans;
        vector<vector<int>> adj(numCourses);
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        for(int i=0;i<numCourses;i++){
            for(auto t:adj[i]){
                ind[t]++;
            }
        }
        for(int i=0;i<numCourses;i++){
            if(ind[i]==0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int node=q.front();
            q.pop();
            ans.push_back(node);
            for(auto p:adj[node]){
                ind[p]--;
                if(ind[p]==0){
                    q.push(p);
                }
            }
        }
        if(ans.size()!=numCourses){
            return false;
        }
        return true;
    }
};