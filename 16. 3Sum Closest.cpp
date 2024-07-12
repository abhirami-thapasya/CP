class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
        int sum=nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        for(int i=0;i+2<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int l=i+1;
            int r=n-1;
            while(l<r){
                int s=nums[i]+nums[l]+nums[r];
                if(s==target){
                    return s;
                }
                if(abs(sum-target)>abs(s-target)){
                    sum=s;
                }
                if(s>target){
                    r--;
                    while(l<r && nums[r]==nums[r+1]){
                        r--;
                    }
                }
                else{
                    l++;
                    while(l<r && nums[l]==nums[l-1]){
                        l++;
                    }
                }
            }
            
        }
        return sum;
    }
};