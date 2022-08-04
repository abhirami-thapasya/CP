#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size(),c=0;
        for(int i=0;i<n/2;i++){
            int a=0,b=0;
            for(int j=0;j<n/2;j++){
                if(s[i]==s[j]){
                    a++;
                }
            }
            for(int k=((n+1)/2);k<n;k++){
                if(s[i]==s[k]){
                    b++;
                }
            }
            if(a!=b){
                cout<<"NO"<<endl;
                break;
            }
            c++;
        }
        if(c==n/2){
            cout<<"YES"<<endl;
        }
    }
    return 0;
}