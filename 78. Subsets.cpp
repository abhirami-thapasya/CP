class Solution {
private:
    void dfs(vector<int>& nums,vector<vector<int>>& ans,vector<int>& s,int x){
        ans.push_back(s);
        for(int i=x;i<nums.size();i++){
            s.push_back(nums[i]);
            dfs(nums,ans,s,i+1);
            s.pop_back();
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> s;
        dfs(nums,ans,s,0);
        return ans;
    }
};