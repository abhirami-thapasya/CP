#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,string> a, pair<int,string> b){
    if(a.first!=b.first){
        return a.first>b.first;
    }
    return a.second<b.second;
}

int main() {
    int n;
    cin>>n;
    vector<pair<int,string>> list(n);
    for(int i=0;i<n;i++){
        cin>>list[i].second>>list[i].first;
    }
    sort(list.begin(),list.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<list[i].second<<" "<<list[i].first<<endl;
    }
    return 0;
}