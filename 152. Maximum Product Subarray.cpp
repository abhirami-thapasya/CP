class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int pre=1,suf=1,maxm=-11;
        for(int i=0;i<n;i++){
            if(pre==0){
                pre=1;
            }
            if(suf==0){
                suf=1;
            }
            pre*=nums[i];
            suf*=nums[n-1-i];
            maxm=max(maxm,max(pre,suf));
        }
        return maxm;
    }
};