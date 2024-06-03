class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        int count=0;
        vector<int> f;
        if(n==0){
            return true;
        }
        if(flowerbed.size()==1){
            if(flowerbed[0]==0 ){
                return true;
            }
            return false;
        }
        f.assign(flowerbed.begin(),flowerbed.end());
        while(i<flowerbed.size()){
            if(i==0){
                if(f[i]==0 && f[i+1]==0){
                    count++;
                    f[i]=1;
                    i+=2;
                }
                else{
                    i++;
                }
            }
            else if(i==flowerbed.size()-1){
                if(f[i]==0 && f[i-1]==0){
                    count++;
                    f[i++]=1;
                }
                i++;
            }
            else if(f[i]==0 && f[i-1]==0 && f[i+1]==0){
                    f[i]=1;
                    count++;
                    i+=2;
            }
            else{
                i++;
            }
        }
        if(count>=n){
            return true;
        }
        return false;
    }
};