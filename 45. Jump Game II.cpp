class Solution {
public:
    int jump(vector<int>& nums) {
        int max=0,min=0,s=0,ans=0;
        int n=nums.size();
        while(max<n-1){
            int i=s;
            for(;i<n;i++){
                if(min>=i && max<=i+nums[i]){
                    max=i+nums[i];
                    s=i+1;
                }
            }
            if(min==max){
                return -1;
            }
            ans++;
            min=max;
        }
        return ans;
    }
};