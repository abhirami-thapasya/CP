#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    while(T--){
        int N,K,Time,smallNum=INT_MAX;
        cin>>N>>K;
        int arr[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
            if(arr[i]<smallNum){
                smallNum=arr[i];
            }
        }
        if(K>smallNum){
            Time=K-smallNum ;
            cout<<Time<<endl; 
        }
        else{
            cout<<"0"<<endl;
        }
        
    }
    return 0;
}