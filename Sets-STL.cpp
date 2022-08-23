#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    set<int> s;
    while(t--){
        
        int q,n;
        cin>>q>>n;
        if(q==1){
            s.insert(n);
        }
        else if(q==2){
            s.erase(n);        
        }
        else if(q==3){
            auto it=s.find(n);
            if(it==s.end()){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}