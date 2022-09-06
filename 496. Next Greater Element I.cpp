class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        stack<int> st;
        unordered_map<int,int> v;
        for(int i=0;i<n;i++){
            while(!st.empty()&&nums2[i]>nums2[st.top()]){
                v.insert({nums2[st.top()],nums2[i]});
                st.pop();
            }
            st.push(i);
        }
        while(!st.empty()){
            v.insert({nums2[st.top()],-1});
            st.pop();
        }
        int m=nums1.size();
        vector<int> u(m);
        for(int i=0;i<m;i++){
            u[i]=v[nums1[i]];
        }
        return u;
    }
};