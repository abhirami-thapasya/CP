class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size();
        vector<int> temp(nums);
        sort(temp.begin(),temp.end());
        int j=n-1;
        for(int i=1;i<n;i+=2){
            nums[i]=temp[j];
            j--;
        }
        for(int i=0;i<n;i+=2){
            nums[i]=temp[j];
            j--;
        }
    }
};