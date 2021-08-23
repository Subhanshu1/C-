#include<bits/stdc++.h>
using namespace std;

int min(int arr[],int n,int l){
	int start=0;
	int end=n-1;
	int mid=0;
	while(start<end){
		 mid=(start+end)/2;
		if(arr[mid]>l){
			end=mid-1;
		}
		else if(l==arr[mid]){
			return arr[mid];
		}
		else{
			start=mid+1;
		}
	}
	int low=abs(l-arr[start]);
	int high=abs(l-arr[end]);
	if(low>high){
		return high;
	}
	else{
		return low;
	}
}

int main(){
	int n;
	cin>>n;
	int l;
	cin>>l;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a=min( arr, n,l);
	cout<<a;
	return 0;
}
