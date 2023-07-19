class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int m[n][n];
        vector<vector<int>> ans;
        int i_low=0,i_high=n-1,j_low=0,j_high=n-1,num=1;
        while(i_low<=i_high && j_low<=j_high){
            for(int j=j_low;j<=j_high;j++){
                m[i_low][j]=num++;
            }
            i_low++;
            for(int i=i_low;i<=i_high;i++){
                m[i][j_high]=num++;
            }
            j_high--;
            if(i_low<=i_high){
                for(int j=j_high;j>=j_low;j--){
                    m[i_high][j]=num++;
                }
            }
            i_high--;
            if(j_low<=j_high){
                for(int i=i_high;i>=i_low;i--){
                    m[i][j_low]=num++;
                }
            }
            j_low++;
        }
        for(int i=0;i<n;i++){
            vector<int>temp;
            for(int j=0;j<n;j++){
                temp.push_back(m[i][j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};