#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[N],s[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
        s[N-1-i]=a[i];
    }
    for(int i=0;i<N;i++){
        cout<<s[i]<<"";
    }
    return 0;
}