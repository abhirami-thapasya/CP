class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,mid;
        while(j>i){
            mid=(i+j)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[i]<nums[mid]){
                if(nums[i]<=target && nums[mid]>target){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            else if(nums[i]>nums[mid]){
                if(nums[mid]<target && nums[j]>=target){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
            else{
                i++;
            }
        }
        if(nums[i]==target){
            return true;
        }
        return false;
    }
};