class Solution {
public:
    int numMagicSquaresInside(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int count=0;
        if(m+n<6){
            return 0;
        }

        auto ismagic = [&](int x,int y)-> int{
            int index[]={0,1,2,5,8,7,6,3};
            string rec1="8167294381672943",rec2="3492761834927618";
            string s="";
            for(auto it:index){
                s+=to_string(grid[x+it/3][y+it%3]);
            }
            if(rec1.find(s)!=string::npos || rec2.find(s)!=string::npos){
                return 1;
            }
            return 0;
        };

        for(int i=0;i+2<m;i++){
            for(int j=0;j+2<n;j++){
                if(grid[i][j]%2==0 && grid[i+1][j+1]==5){
                    count+=ismagic(i,j);
                }
            }
        }
        return count;
    }
};