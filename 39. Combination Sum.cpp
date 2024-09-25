class Solution {
public:
    void ans(vector<int>& v,vector<vector<int>>& pairs,vector<int>& candidates,int target,int index){
        if(target==0){
            pairs.push_back(v);
            return;
        }
        if(target<0){
            return;
        }
        for(int i=0;i<candidates.size();i++){
            if(i>=index){
                v.push_back(candidates[i]);
                ans(v,pairs,candidates,target-candidates[i],i);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> v;
        vector<vector<int>> pairs;
        ans(v,pairs,candidates,target,0);
        return pairs;
    }
};