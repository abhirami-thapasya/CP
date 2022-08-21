#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    string door;
    cin>>door;
    map<char,char> m;
    int ans=0;
    for(int i=0;i<(2*n)-2;i++){
        if(i%2==0){
            m[door[i]-'a']++;
        }
        else{
            if(m[door[i]-'A']==0){
                ans++;
            }
            else{
                m[door[i]-'A']--;
            }
        }
    }
    cout<<ans;
    return 0;
}