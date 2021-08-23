#include<iostream>
#include<cstring>
using namespace std;


int knapsack(int n,int *wt,int *val,int W,int t[102][1002]){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=W;j++){
			if(i==0|| j==0){
				t[i][j]= 0;
			}
			if(wt[i-1]<=j){
				t[i][j]=max(val[i-1]+t[i][j-wt[i-1]],t[i-1][j]);
			}
			else {
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[n][W];
}
int main(){
	int n;
	cin>>n;
	int *wt=new int[n];
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}
	int *val=new int[n];
	for(int i=0;i<n;i++){
		cin>>val[i];
	}
	int W=n;
	int t[102][1002];
memset(t,-1,sizeof(t));
	int a=knapsack(n,wt,val,W,t);
	cout<<a;
	return 0;
}
