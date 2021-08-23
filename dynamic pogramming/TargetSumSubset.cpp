#include<iostream>
#include<cstring>
using namespace std;

/*
5 
1 2 3 4 5
7
*/
bool SubsetSum(int n,int *wt,int Sum){
bool t[n+1][Sum+1];
for(int i=0;i<=n;i++){
	for(int j=0;j<=Sum;j++){
		
		if(i==0 && j==0){
			cout<<"dwq"<<endl;
			t[i][j]= true;
			cout<<t[i][j]<<endl;
		}
		else if(i==0){
			t[i][j]= false;
		}
		else if(j==0){
			t[i][j]= true;
		}
		if(wt[i-1]<=j)
		 t[i][j]=t[i-1][j-wt[i-1]] || t[i-1][j];
	    
	 else {
		 t[i][j]=t[i-1][j];
	}
		 cout<<t[i][j]<<" ";
	  }
	  cout<<endl;
   }
   for(int i=0;i<=n;i++){
	for(int j=0;j<=Sum;j++){
		cout<<t[i][j]<<" ";
	}
	cout<<endl;
}
   return t[n][Sum];
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


  
	bool a=SubsetSum(n,wt,W);
	if(a==true){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
