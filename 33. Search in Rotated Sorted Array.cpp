class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1,mid;
        while(j>i){
            mid=(i+j)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(nums[i]<=nums[mid]){
                if(nums[i]<=target && target<nums[mid]){
                    j=mid-1;
                }
                else{
                    i=mid+1;
                }
            }
            else{
                if(nums[mid]<target && target<=nums[j]){
                    i=mid+1;
                }
                else{
                    j=mid-1;
                }
            }
        }
        if(target==nums[i]){
            return i;
        }
        return -1;
    }
};