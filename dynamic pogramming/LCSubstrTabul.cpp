#include<iostream>
#include<cstring>
using namespace std;

/*
abcdfg
abedhg
*/

int LCS(string s1,int n1,string s2,int n2){
	int maxx=0;
	int t[n1+1][n2+1];
	for(int i=0;i<=n1;i++){
		for(int j=0;j<=n2;j++){
			t[i][j]=-1;
		}
	}
     for(int i=0;i<=n1;i++){
     	for(int j=0;j<=n2;j++){
	    if(i==0 || j==0){
	    	t[i][j]=0;
		}
	else if(s1[i-1]==s2[j-1]){
	  t[i][j]=1+t[i-1][j-1];
	  if(t[i][j]>maxx){
	  	maxx=t[i][j];
	  }
	}
	else{
	t[i][j]=0;
	}
		cout<<t[i][j]<<" ";
}
cout<<endl;
}
	return maxx;
}

int main(){
	
	string s1;
     cin>>s1;
	string s2;
     cin>>s2;
     int n=s1.length();
     int a=LCS(s1,n,s2,n);
     cout<<a;
}
