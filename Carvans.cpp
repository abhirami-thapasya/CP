#include <bits/stdc++.h>
using namespace std;

class solution{
public:
    int noOfCar(int n,int a[]){
        int num=1,sp=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<=sp){
                num++;
                sp=a[i];
            }    
        }
        return num;
    }
};

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        solution ob;
        auto num=ob.noOfCar(n,a);
        cout<<num<<endl;
    }
    return 0;
}