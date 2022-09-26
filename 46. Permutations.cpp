class Solution {
private:
    void sol(vector<int> nums,vector<vector<int>>& ans,int i){
        if(i>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            sol(nums,ans,i+1);
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int index=0;
        sol(nums,ans,index);
        return ans;
    }
};