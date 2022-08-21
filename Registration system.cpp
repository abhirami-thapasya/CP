#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<string,int> m;
    while(n--){
        string name;
        cin>>name;
        m[name]++;
        if(m[name]==1){
            cout<<"OK"<<endl;
        }
        else{
            cout<<name<<(m[name]-1)<<endl;
        }
    }
    return 0;
}