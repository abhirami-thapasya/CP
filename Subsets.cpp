class Solution {
private:
    void sol(vector<int> nums,int i,vector<int> subset,vector<vector<int>>& powerset){
        //base condition
        if(i>=nums.size()){
            powerset.push_back(subset);
            return;
        }
        sol(nums,i+1,subset,powerset);
        subset.push_back(nums[i]);
        sol(nums,i+1,subset,powerset);
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        vector<vector<int>> powerset;
        int index=0;
        sol(nums,index,subset,powerset);
        return powerset;
    }
};