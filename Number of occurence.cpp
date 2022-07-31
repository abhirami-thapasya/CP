#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int occurence=0;
	    while(n--){
	        if(arr[n]==x){
	            occurence++;
	        }
	    }
	    return occurence;
	}
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		Solution ob;
		auto ans=ob.count(arr,n,x);
		cout<<ans<<endl;
	}
	return 0;
}

