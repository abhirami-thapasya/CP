class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        int n=groupSizes.size();
        vector<vector<int>> ans(n+1,vector<int>(0));
        vector<vector<int>> res;
        for(int i=0;i<n;i++){
            ans[groupSizes[i]].push_back(i);
            if(ans[groupSizes[i]].size()==groupSizes[i]){
                res.push_back(ans[groupSizes[i]]);
                ans[groupSizes[i]].clear();
            }
        }
        return res;
    }
};