class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>& images,vector<vector<int>>& image,int pixelvalue,int color){
        images[row][col]=color;
        int m=images.size();
        int n=images[0].size();
        int x[]={-1,0,0,1};
        int y[]={0,1,-1,0};
       for(int i=0;i<4;i++){
               int nrow=row+x[i];
               int ncol=col+y[i];
            if(nrow>=0 && nrow<m && ncol>=0 && ncol<n && image[nrow][ncol]==pixelvalue && images[nrow][ncol]!=color){
                   dfs(nrow,ncol,images,image,pixelvalue,color);
               } 
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int pixelvalue=image[sr][sc];
        vector<vector<int>> images;
        images=image;
        dfs(sr,sc,images,image,pixelvalue,color);
        return images;
    }
};