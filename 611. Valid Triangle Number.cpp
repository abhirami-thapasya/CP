class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n= nums.size();
        if(n<3){
            return 0;
        }
        int count=0;
        for(int i=n-1;i>1;i--){
            int k=0,j=i-1;
            while(k<j){
                if(nums[j]+nums[k]>nums[i]){
                    count+=j-k;
                    j--;
                }
                else{
                    k++;
                }
            }
        }
        return count;
    }
};