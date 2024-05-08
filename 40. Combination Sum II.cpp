class Solution {
private:    
    void dfs(vector<int>& candidates,int target,int x,vector<int>& s,vector<vector<int>>& ans){
        if(target<0){
            return;
        }
        if(target==0){
            ans.push_back(s);
            return;
        }
        for(int i=x;i<candidates.size();i++){
            if(i>x && candidates[i]==candidates[i-1]){
                continue;
            }
            s.push_back(candidates[i]);
            dfs(candidates,target-candidates[i],i+1,s,ans);
            s.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> s;
        sort(candidates.begin(),candidates.end());
        dfs(candidates,target,0,s,ans);
        return ans;
    }
};