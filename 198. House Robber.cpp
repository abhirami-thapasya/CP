class Solution {
public:
    int rob(vector<int>& nums) {
        int count1=0,count2=0;
        for(int i=0;i<nums.size();i++){
            if(i%2==0){
                count1=max(count1+nums[i],count2);
            }
            else{
                count2=max(count2+nums[i],count1);
            }
        }
        return max(count1,count2);
    }
};