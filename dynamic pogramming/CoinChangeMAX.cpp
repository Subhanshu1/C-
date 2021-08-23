#include<iostream>
#include<cstring>
using namespace std;

/* 
3
1 2 3 
5
*/

int  SubsetSum(int n,int *wt,int Sum,int  t[102][1002]){

	if((n==0 && Sum!=0) || Sum<0){
		return 0;
	}
	if(Sum==0){
		return 1;
	}
		if(t[n][Sum]!=-1){
		return t[n][Sum];
	}
	
	if(wt[n-1]<=Sum){
		return t[n][Sum]=SubsetSum(n,wt,Sum-wt[n-1],t) + SubsetSum(n-1,wt,Sum,t);
	}
	else if(wt[n-1]>Sum){
		return t[n][Sum]=SubsetSum(n-1,wt,Sum,t);
	}
}
int main(){
	int n;
	cin>>n;
	int *wt=new int[n];
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}

	int W;
	cin>>W;
	
	int t[102][1002];
for(int i=0;i<102;i++){
	for(int j=0;j<1002;j++){
		t[i][j]=-1;
	}
}
  
	int a=SubsetSum(n,wt,W,t);
		cout<<a;
	
	return 0;
}
