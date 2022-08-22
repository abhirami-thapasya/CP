#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        multiset<long long> bags;
        for(int i=0;i<n;i++){
            long long candy;
            cin>>candy;
            bags.insert(candy);
        }
        long long max_candy=0;
        for(int i=0;i<k;i++){
            long long more_candy;
            auto it=(--bags.end());
            more_candy=*it;
            max_candy+=more_candy;
            bags.erase(it);
            bags.insert(more_candy/2);
        }
        cout<<max_candy<<endl;
    }
    return 0;
}