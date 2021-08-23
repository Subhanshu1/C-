#include<iostream>
using namespace std;

int global=INT_MAX;
void mincost(int n,int sr,int sc,int dr,int dc,int **input,int output){

	
	if(sr==dr && sc==dc){
		if(global>output){
			global=output;
		}
		return;
	}
	if(sr>dr || sc>dr){
		return ;
	}
	mincost(n, sr+1, sc, dr, dc,input,output+input[sr+1][sc]);
	mincost(n, sr, sc+1, dr, dc,input,output+input[sr][sc+1]);
}
int main(){
	int n;
	cin>>n;
		
	int **input=new int*[n];
	for(int i=0;i<n;i++){
		input[i]=new int[n];
		for(int j=0;j<n;j++){
			cin>>input[i][j];
		}
	}

	mincost(n,0,0,n-1,n-1,input,0);
	cout<<global;
}
