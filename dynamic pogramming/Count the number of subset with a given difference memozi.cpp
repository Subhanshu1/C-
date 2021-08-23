#include<iostream>
#include<cstring>
using namespace std;

/* 
4
1 1 2 3
1
*/

int  SubsetSum(int n,int *wt,int Sum){
	int dp[n+1][Sum+1];
  for(int i=0;i<=n;i++){
  	for(int j=0;j<=Sum;j++){
  		if(i==0 && j==0){
  			dp[i][j]= 1;
		  }
  		else if(i==0){
  			dp[i][j]= 0;
		  }
		 else  if(j==0){
		  	dp[i][j]=1;
		  }
		  else if(wt[i-1]<Sum){
		  	dp[i][j]=dp[i-1][j-wt[i-1]]+dp[i-1][j];
		  }
		  else{
		  	dp[i][j]=dp[i-1][j];
		  }
	  }
  }
  return dp[n][Sum];
}
int main(){
	
	cout<<"dqdq";
	int n;
	cin>>n;
	int sum=0;
	int *wt=new int[n];
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}

	int diff;
	cin>>diff;
	cout<<"dwd"<<diff;
   int s1,s2;
   for(int i=0;i<n;i++){
	     sum=sum+wt[i];
	}
   s1=(sum+diff)/2;
   
   cout<<"efef"<<diff;
   
  
	return 0;
}
