class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        int k=0,i=1;
        while(i<nums.size()){
            while(nums[k]!=0){
                k++;
                if(k==nums.size()){
                    return;
                }
            }
            i=k;
            while(nums[i]==0){
                i++;
                if(i==nums.size()){
                    return;
                }
            }
            swap(nums[i],nums[k]);
            k++;
            i++;
        }
    }
};