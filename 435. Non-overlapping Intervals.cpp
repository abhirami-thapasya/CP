class Solution {
public:
    bool static comp(vector<int> a,vector<int> b){
        return a[1]<b[1];
    }
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end(),comp);
        int count=1,end=intervals[0][1];
        int n=intervals.size();
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=end){
                count++;
                end=intervals[i][1];
            }
        }
        return n-count;
    }
};