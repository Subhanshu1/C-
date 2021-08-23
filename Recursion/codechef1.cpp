#include <bits/stdc++.h>

using namespace std;

int bear(int n, vector<int>arr){
    sort(arr.begin(),arr.end(),greater<int>());
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
        	ans+=arr[i];
		}
    }
    return ans;
}
int main() {
    
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	   int ans= bear(n,arr);
	   cout<<ans<<endl;
	}
	return 0;
}

