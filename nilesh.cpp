#include<iostream>
using namespace std;
int total=0;
void ratmaze(int i ,int j,int n,int m,string nilesh ){
	if(i==n-1 && j==m-1){
		total+=1;
		cout<<nilesh<<endl;
		return;
	}
	if(i==n || j==m){
	    return;
	}
	 ratmaze(i+1 ,j, n,m, nilesh+'D' );
	  ratmaze( i , j+1, n, m,nilesh+'R' );
}

int main(){
	ratmaze( 0 ,0,3,3, " " );
	cout<<total;
}
