#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,noOfFives=0;
        cin>>n;
        if(n<5){
            cout<<'0'<<endl;
            continue;
        }
        while(n/5>=1){
            noOfFives+=n/5;
            n=n/5;
        }
        cout<<noOfFives<<endl;
    }
    return 0;
}