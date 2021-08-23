#include<iostream>
using namespace std;

void FindCombination(int n,bool **arr,int start,int last){
     
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
     for(int j=last+1;j<n*n;j++){
        int	row=j/n;
        int col=j%n;
     	arr[row][col]=true;
     	FindCombination(n ,arr,start+1,j);
     	arr[row][col]=false;
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
	
	FindCombination(n ,arr,0,-1);
	
}
