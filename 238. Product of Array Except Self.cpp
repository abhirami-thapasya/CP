class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int n=nums.size();
        vector<int> f(n);
        vector<int> b(n);
        f[0]=1;
        b[n-1]=1;
        for(int i=1;i<n;i++){
            f[i]=f[i-1]*nums[i-1];
        }
        for(int i=n-2;i>=0;i--){
            b[i]=b[i+1]*nums[i+1];
        }
        for(int i=0;i<n;i++){
            int pdt=f[i]*b[i];
            ans.push_back(pdt);
        }
        return ans;
    }
};