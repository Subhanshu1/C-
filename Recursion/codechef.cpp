#include <bits/stdc++.h>

using namespace std;

int bear(int n, vector<int>arr){
    sort(arr.begin(),arr.end());
    if(arr[1]-arr[0]>1 && arr[1]-arr[0]==0){
        return arr[0];
    }
    if(arr[n-1]-arr[n-2]>1 && arr[n-1]-arr[n-2]==0){
        return arr[n-1];
    }
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            ans= arr[i];
            break;
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

