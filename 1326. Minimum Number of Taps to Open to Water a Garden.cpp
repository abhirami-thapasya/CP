class Solution {
public:
    int minTaps(int n, vector<int>& ranges) {
        int min=0,max=0,s=0,ans=0;
        while(n>max){
            int i=s;
            for(;i<ranges.size();i++){
                if(i-ranges[i]<=min && i+ranges[i]>=max){
                    max=i+ranges[i];
                    s=i;
                }
            }
            if(min==max){
                return -1;
            }
            ans++;
            min=max;
        }
        return ans;
    }
};