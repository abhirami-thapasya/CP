class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<pair<int,int>> st;
        vector<int> right(n);
        vector<int> left(n);
        for(int i=0;i<n;i++){
            int num=1;
            while(!st.empty() && heights[i]<=st.top().first){
                num+=st.top().second;
                st.pop();
            }
            left[i]=num;
            st.push({heights[i],num});
        }
        st=stack<pair<int,int>>();
        for(int i=n-1;i>=0;i--){
            int num=1;
            while(!st.empty() && heights[i]<=st.top().first){
                num+=st.top().second;
                st.pop();
            }
            right[i]=num;
            st.push({heights[i],num});
        }
        int area=0;
        for(int i=0;i<n;i++){
            area=max(area,(right[i]+left[i]-1)*heights[i]);
        }
        return area;
    }
};