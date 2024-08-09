class Solution {
private:
    struct comp{
        bool operator()(const string& a,const string& b){
            if(a.length()>b.length()){
                return false;
            }
            else if(a.length()==b.length()){
                return a<b;
            }
            return true;
        }
    };
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue<string,vector<string>,comp> pq;
        int n=nums.size();
        for(int i=0;i<n;i++){
            pq.push(nums[i]);
        }
        while(k>1){
            pq.pop();
            k--;
        }
        return pq.top();
    }
};