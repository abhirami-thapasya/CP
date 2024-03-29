class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0,j=0;
        double sum=0,max=0;
        while(j-i<k){
            sum+=nums[j];
            j++;
        }
        max=sum;
        while(j<nums.size()){
            sum+=nums[j];
            sum-=nums[i];
            i++;
            j++;
            if(max<sum){
                max=sum;
            }
        }
        double ans=max/k;
        return ans;
    }
};