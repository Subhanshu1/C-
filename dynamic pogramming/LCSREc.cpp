#include<iostream>
#include<cstring>
using namespace std;

/*
abcdfg
abedhg
*/

int LCS(string s1,int n1,string s2,int n2,int t[][n]){
	

	if(n1==0 || n2==0){
		return 0;
	}
	if(t[n1][n2]!=-1){
		cout<<"ewwcwec"<<endl;
		return t[n1][n2];
	}
	if(s1[n1-1]==s2[n2-1]){
	 return t[n1][n2]=1+LCS( s1, n1-1, s2, n2-1,t);
	}
	else{
		return t[n1][n2]=max(LCS( s1, n1-1, s2, n2,t),LCS( s1, n1, s2, n2-1,t));
	}
	return t[n1][n2];
}

int main(){
	
	string s1;
     cin>>s1;
	string s2;
     cin>>s2;
     int n=s1.length();
     int t[n+1][n+1];
     	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			t[i][j]=-1;
		}
	}
     int a=LCS(s1,n,s2,n,t);
     cout<<a;
}
