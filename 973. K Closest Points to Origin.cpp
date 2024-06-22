class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> pq;
        pq.push({pow(points[0][0],2)+pow(points[0][1],2),0});
        int i=1;
        int n=points.size();
        while(i<n){
            int a=points[i][0];
            int b=points[i][1];
            int d=a*a + b*b;
            if(pq.size()<k){
                pq.push({d,i});
            }
            else{
                auto it=pq.top();
                int dis=it.first;
                if(dis>d){
                    pq.pop();
                    pq.push({d,i});
                }
            }
            i++;
        }
        vector<vector<int>> ans;
        while(!pq.empty()){
            auto it=pq.top();
            int dis=it.first;
            int ind=it.second;
            pq.pop();
            ans.push_back(points[ind]);
        }
        return ans;
    }
};