#include<iostream>
using namespace std;

int element(int arr[],int n,int k){
	int start=0;
	int end=n-1;
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]<k){
			start=mid+2;
		}
		 if(arr[mid]==k){
			return mid;
		}
	   if(mid<=end && arr[mid+1]==k){
			 return mid+1;
		}
		if(start>=mid && arr[mid-1]==k){
				return mid-1;
		}
		else{
			end=mid-2;
		}  
	}
	return -1;
}

int main(){
	int n;
	cin>>n;
	int k;
	cin>>k;
	int arr[100];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int a=element( arr, n,k);
	cout<<a;
	return 0;
}
