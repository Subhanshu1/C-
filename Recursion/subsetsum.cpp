#include<iostream>
#include<cstring>
using namespace std;


bool SubsetSum(int n,int *wt,int Sum,int  t[102][1002]){
	cout<<n<<endl;
	if((n==0 && Sum!=0) || Sum<0){
		return false;
	}
	if(Sum==0){
		return true;
	}
		if(t[n][Sum]!=-1){
		return t[n][Sum];
	}
	
	if(wt[n-1]<=Sum){
		return t[n][Sum]=SubsetSum(n-1,wt,Sum-wt[n-1],t) || SubsetSum(n-1,wt,Sum,t);
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
	cout<<"qdw";
	int t[102][1002];
for(int i=0;i<102;i++){
	for(int j=0;j<1002;j++){
		t[i][j]=-1;
	}
}
  
	bool a=SubsetSum(n,wt,W,t);
	if(a==true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
