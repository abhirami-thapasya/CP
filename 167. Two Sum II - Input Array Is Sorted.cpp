class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0;
        int j=numbers.size()-1;
        vector<int> ans;
        if(numbers[i]+numbers[j]==target){
            ans.push_back(i+1);
            ans.push_back(j+1);
            return ans;
        }
        while(j>i){
            if(numbers[i]+numbers[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            else if(numbers[i]+numbers[j]>target && i<j){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};