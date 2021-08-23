#include<iostream>
#include<cstring>>
using namespace std;


int knapsack(int n,int *wt,int *val,int W,int t[102][1002]){
	if(n==0 || W==0){
		return 0;
	}
	if(t[n][W]!=-1){
		return t[n][W];
	}
	cout<<W<<endl;
	if(wt[n-1]<=W){
		return t[n][W]=max(val[n-1]+knapsack(n-1,wt,val,W-wt[n-1],t),knapsack(n-1,wt,val,W,t));
	}
	else if(wt[n-1]>W){
		return t[n][W]=knapsack(n-1,wt,val,W,t);
	}
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
	int W;
	cin>>W;
	int t[102][1002];
memset(t,-1,sizeof(t));
	int a=knapsack(n,wt,val,W,t);
	cout<<a;
	return 0;
}
