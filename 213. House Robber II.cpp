class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        int count1=0,count2=0;
        for(int i=0;i<nums.size()-1;i++){
            if(i%2==0){
                count1=max(count1+nums[i],count2);
            }
            else{
                count2=max(count2+nums[i],count1);
            }
        }
        int rob1= max(count1,count2);
        count1=0;
        count2=0;
        for(int i=1;i<nums.size();i++){
            if(i%2==0){
                count1=max(count1+nums[i],count2);
            }
            else{
                count2=max(count2+nums[i],count1);
            }
        }
        int rob2= max(count1,count2);
        return max(rob1,rob2);
    }
};