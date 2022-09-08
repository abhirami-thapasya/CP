#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string,int> a,pair<string,int> b){
	if(a.second!=b.second){
		return a.second>b.second;
	}
	return a.first<b.first;
}

int main() {
	int n;
	cin>>n;
	vector<pair<string,int>> list(n);
	for(int i=0;i<n;i++){
		cin>>list[i].first>>list[i].second;
	}
	sort(list.begin(),list.end(),cmp);
	for(int i=0;i<n;i++){
		cout<<list[i].first<<" "<<list[i].second<<endl;
	}
	return 0;
}