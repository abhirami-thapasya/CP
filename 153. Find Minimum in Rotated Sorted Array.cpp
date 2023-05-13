class Solution {
public:
    int findMin(vector<int>& nums) {
        int i=0,j=nums.size()-1,mid;
        int ans=nums[0];
        if(nums[i]<nums[j]){
            return ans;
        }
        while(j>i){
            mid=(i+j)/2;
            if(nums[mid]>=ans){
                i=mid+1;
            }
            else{
                j=mid;
            }
        }
        return nums[i];
    }
};