#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a[26];
        for(int i=0;i<26;i++){
            a[i]=0;
        }
        int g=0;
        for(int i=0;i<s.size();i++){
            a[int(s[i])-int('a')]++;
        }
        for(int i=0;i<26;i++){
            if(a[i]>=2){
                g++;
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(g==0){
            cout<<"No"<<endl;
        }
    }
    return 0;
}