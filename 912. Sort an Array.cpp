class Solution {
private:
    void heapify(vector<int>& nums,int curr,int size){
        int smallest=curr;
        int l=2*curr+1;
        int r=2*curr+2;
        if(l<size && nums[l]<nums[smallest]){
            smallest=l; 
        }
        if(r<size && nums[r]<nums[smallest]){
            smallest=r; 
        }
        if(smallest!=curr){
            int temp=nums[curr];
            nums[curr]=nums[smallest];
            nums[smallest]=temp;
            heapify(nums,smallest,size);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        for (int i = nums.size() / 2 - 1; i >= 0; i--) {
            heapify(nums, i, nums.size());
        }
        for(int i=nums.size()-1;i>0;i--){
            int temp=nums[0];
            nums[0]=nums[i];
            nums[i]=temp;
            heapify(nums,0,i);
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};