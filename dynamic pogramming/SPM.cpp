#include<iostream>
#include<cstring>
using namespace std;

/*
abcdfg
abedhg
*/

bool SPM(string s1,int n1,string s2,int n2){
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
	}
	else{
	t[i][j]=max(t[i-1][j],t[i][j-1]);
	}
		
}

}
	if(s1.length()==t[n1][n2]){
		return true;
	}
	else return false;
}

int main(){
	
	string s1;
     cin>>s1;
	string s2;
     cin>>s2;
     int n1=s1.length();
     int n2=s2.length();
     bool a=SPM(s1,n1,s2,n2);
     if(a==true) cout<<"true";
     else cout<<"false";
}
