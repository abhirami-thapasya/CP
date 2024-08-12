class Solution {
public:
    string frequencySort(string s) {
        priority_queue<pair<int,char>> pq;
        map<char,int> m;
        for(char c:s){
            m[c]++;
        }
        string ans="";
        for(auto it:m){
            pq.push({it.second,it.first});
        }
        while(!pq.empty()){
            pair<int,int> it=pq.top();
            pq.pop();
            int i=it.first;
            char c=it.second;
            while(i--){
                ans+=c;
            }
        }
        return ans;
    }
};