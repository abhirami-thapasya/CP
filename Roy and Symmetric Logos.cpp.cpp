#include <bits/stdc++.h>
using namespace std;
int arr[32][32];
class Solution{
public:
    string symmetric(int n){
        // check wether its symm about Y axis
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                if(arr[i][j]!=arr[i][n-1-j]){
                    return "NO";
                }
            }
        }
        // check wether its symm about X axis
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                if(arr[j][i]!=arr[n-1-j][i]){
                    return "NO";
                }
            }
        }
        return "YES";
    }
};
int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            for(int j=0;j<n;j++){
                arr[i][j]=s[j];        
            }
        }
        Solution ob;
        auto is_symmetric=ob.symmetric(n);
        cout<<is_symmetric<<endl;
    }
    return 0;
}