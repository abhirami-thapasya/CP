class Solution {
public:
    int maximizeGreatness(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0,j=0;
        while(j<n){
            if(nums[i]>=nums[j]){
                j++;
            }
            else{
                i++;
                j++;
            }
        }
        return i;
    }
};