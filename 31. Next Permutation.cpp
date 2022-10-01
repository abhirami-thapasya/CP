class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1;
        for(int i=nums.size()-1;i>0;i--){
            if(nums[i-1]<nums[i]){
                index=i-1;
                break;
            }
        }
        if(index==-1){
            sort(nums.begin(),nums.end());
            return;
        }
        int a= index+1;
        sort(nums.begin()+a,nums.end());
        for(int i=index+1;i<nums.size();i++){
            if(nums[i]>nums[index]){
                swap(nums[index],nums[i]);
                break;
            }
            
        }
        sort(nums.begin()+index+1,nums.end());
        return;
    }
};