#include<iostream>
using namespace std;

int min(int arr[],int n,int l){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]>arr[end]){
			start=mid+1;
		}
		else if(arr[mid-1]>arr[mid] && arr[mid]<arr[mid+1]){
			return mid;
		}
		else{
			end=mid-1;
		}
	}
	return -1;
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
