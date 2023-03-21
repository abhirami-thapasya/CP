class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        if(image[sr][sc]==color){
            return image;
        }
        fill(image,sr,sc,image[sr][sc],color);
        return image;
    }

    void fill(vector<vector<int>>& image, int sr, int sc,int val, int color){
        if(sr<0 || sr>=image.size() || sc<0 || sc>=image[0].size() || image[sr][sc]!=val){
            return;
        }
        image[sr][sc]=color;
        fill(image,sr+1,sc,val,color);
        fill(image,sr-1,sc,val,color);
        fill(image,sr,sc+1,val,color);
        fill(image,sr,sc-1,val,color);
    }
};