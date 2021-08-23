#include<iostream>
#include<cstring>
using namespace std;

/*
abcdfg
abedhg
*/

void LCS(string s1,int n1,string s2,int n2,string s3){
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
int i=n1,j=n2;
	while(i==0 || j==0){
	
     		if(s1[i-1]==s2[j-1]){
     			s3+s1[j-1];
     			i--;
     			j--;
			 }
			 else{
			 	s3+s1[j-1];
			 	j--;
			 }
		 
    }
    cout<<s3;
}

int main(){
	
	string s1;
     cin>>s1;
	string s2;
     cin>>s2;
     int n=s1.length();
     int n2=s2.length();
     int t[n+1][n+1];
     	for(int i=0;i<=n;i++){
		for(int j=0;j<=n;j++){
			t[i][j]=-1;
		}
	}

     LCS(s1,n,s2,n2,"");
     
}
