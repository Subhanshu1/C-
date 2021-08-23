#include<iostream>
using namespace std;

void FindCombination(int row, int col,int n,bool **arr,int start){
     
     if(start==n){
     	for(int i=0;i<n;i++){
     		for(int j=0;j<n;j++){
     			if(arr[i][j]==true){
     				cout<<"q"<<" ";
				 }
				 else{
				 	cout<<"-"<<" ";
				 }
				 
			 }
			 cout<<endl;
		 }
		 cout<<endl;
		 return;
	 }
     for(int j=col+1;j<n;j++){
     	arr[row][j]=true;
     	FindCombination(row,j,n ,arr,start+1);
     	arr[row][j]=false;
	 }
	 for(int i=row+1;i<n;i++){
	 	for(int j=0;j<n;j++){
	 		arr[i][j]=true;
     	    FindCombination(i,j,n ,arr,start+1);
     		arr[i][j]=false;
		 }
	 }
}
int main(){
	int n;
	cin>>n;
	
	bool **arr=new bool*[n];
	
	for(int i=0;i<n;i++){
		arr[i]=new bool[n];
		for(int j=0;j<n;j++){
			arr[i][j]=false;
		}
	
	}
	
	FindCombination(0,-1,n ,arr,0);
	
}
