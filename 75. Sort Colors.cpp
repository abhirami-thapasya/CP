class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0;
        int mid=0;
        int r=nums.size()-1;
        while(mid<=r){
            if(nums[mid]==0){
                swap(nums[mid],nums[l]);
                mid++;
                l++;
            }
            else if(nums[mid]==2){
                swap(nums[r],nums[mid]);
                r--;
            }
            else{
                mid++;
            }
        }
    }
};