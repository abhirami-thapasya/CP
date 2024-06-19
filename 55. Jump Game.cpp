class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxlength=0,n=nums.size();
        for(int i=0;i<n;i++){
            if(i>maxlength){
                return false;
            }
            else{
                maxlength=max(nums[i]+i,maxlength);
            }
        }
        return true;
    }
};