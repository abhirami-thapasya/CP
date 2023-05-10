class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> hash;
        for(int i=0;i<nums.size();i++){
            hash[nums[i]]++;
        }
        map<int,vector<int>> m;
        for(auto it=hash.begin();it!=hash.end();it++){
            m[it->second].push_back(it->first);
        }
        for(auto it=m.rbegin();it!=m.rend();it++){
            for(int i=0;i<it->second.size();i++){
                if(ans.size()<k){
                    ans.push_back(it->second[i]);
                }
            }
        }
        return ans;
    }
};