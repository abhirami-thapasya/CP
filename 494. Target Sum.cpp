class Solution {
public:
    void sol(int &count,vector<int>& nums,int target,int index){
        if(index==nums.size()){
            if(target==0){
                count++;
            }
            return;
        }
        sol(count,nums,target-nums[index],index+1);
        sol(count,nums,target+nums[index],index+1);
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int count=0;
        sol(count,nums,target,0);
        return count;
    }
};