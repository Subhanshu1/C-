/*
#include<iostream>
using namespace std;

void countStep(int n,int arr[]){
	int *dp=new int[n+1];
	dp[n]=1;
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<=arr[i] && i+j<=n;j++){
			dp[i]+=dp[i+j];
		}
	}
	cout<< dp[0];
	
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	countStep(n,arr);

}
*/
#include <iostream>
using namespace std;

int cs(int arr[], int n){
    
    int *dp=new int[n+1];
    for(int i = 0 ; i <= n; i++){
        dp[i] = 0;
    }
	dp[n]=1;
	for(int i=n-1;i>=0;i--){
		for(int j=1;j<=arr[i] && i+j<=n;j++){
			cout<<"ad "<<dp[i]<<endl;
			dp[i]+=dp[i+j];
		}
	}
	return dp[0];
	

    
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}
