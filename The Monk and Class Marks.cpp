#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	map<int,multiset<string>> list;
	while(n--){
		string name;
		int m;
        cin>>name>>m;
		list[m].insert(name);
	}
	auto it=--list.end();
	while(1){
		auto students=(*it).second;
		auto mark=(*it).first;
		for(auto student : students){
		    cout<<student<<" "<<mark<<endl;
		}
		if(it==list.begin()){
		    break;
		}
		it--;
	}
	return 0;
}