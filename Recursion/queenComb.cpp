#include<iostream>
using namespace std;

void queen(int row,int col,int n,char **arr,int ans)
{     
     if(row==n){
     	if(ans==n){
		 
     	for(int i=0;i<n;i++){
     		for(int j=0;j<n;j++){
     			cout<<arr[i][j];
			 }
			 cout<<endl;
		 }
		 cout<<endl;
	}
		 return;
	 }
	 int rn=0;
	 int cn=0;
	 if(col==n-1){
	 	rn=row+1;
	 	cn=0;
	 	
	 }
	 else{
	     rn=row;
	 	cn=col+1;
	 }
	 arr[row][col]='q';
  queen(rn,cn,n,arr,ans+1); 	
  arr[row][col]='-';
   queen(rn,cn,n,arr,ans); 	
}



int main(){
    int n;
    cin>>n;
    
    char **arr=new char*[n];
    for(int i=0;i<n;i++){
    	arr[i]=new char[n];
	}

	queen(0,0,n,arr,0);
}

