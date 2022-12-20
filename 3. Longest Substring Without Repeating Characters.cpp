class Solution {
public:
    int lengthOfLongestSubstring(string s){
        vector<int> arr(128);
        int left=0,right=0;
        int len=0,maxm=0;
        int n=s.size();
        while(right<n){
            char r=s[right];
            while(arr[r]!=0){
                char l=s[left];
                arr[l]--;
                left++;
            }
            arr[r]++;
            len=right+1-left;
            maxm=max(len,maxm);
            right++;
        }
        return maxm;
    }
};