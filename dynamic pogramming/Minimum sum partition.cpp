#include<iostream>
#include<cstring>>
#include<math.h>
using namespace std;


int knapsack(int n,int *wt,int *val,int W,int ** t){
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
int minDifference(int wt[], int n)  { 
	    int sum=0,W=0;
	    for(int i=0;i<n;i++){
	        sum=sum+wt[i];
	    }
	    if(sum%2==1){
	        W=(sum+1)/2;
	    }
	    else{
	        W=sum/2;
	    }
	    int **t=new int*[n+1];
	    for(int i=0;i<n+1;i++){
	        t[i]=new int[W+1];
	        for(int j=0;j<W+1;j++){
	            t[i][j]=-1;
	        }
	    }
	    int *val=new int[n];
	    for(int i=0;i<n;i++){
	    	val[i]=wt[i];
		}
	   int a= knapsack( n, wt, val,W, t);
	   int b=sum-a;
	   int c=abs(b-a);
	   return c;
	} 
int main(){
	int n;
	cin>>n;
	int *wt=new int[n];
	for(int i=0;i<n;i++){
		cin>>wt[i];
	}
	int a=minDifference(wt ,n);
	cout<<a;
	return 0;
}
