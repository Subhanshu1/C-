#include<iostream>
#include<cstring>
using namespace std;

/*
abcdfg
abedhg
*/
string ans="";
void LCS(string s1,int n1,string s2,int n2,string output){
	
	if(n1==0 || n2==0){
		if(ans.length()<output.length()){
			ans=output;
		}
		return ;
	}
	
	if(s1[n1-1]==s2[n2-1]){
	 LCS( s1, n1-1, s2, n2-1,output+s1[n1-1]);
	}
	else{
		LCS( s1, n1-1, s2, n2,output); 
		 LCS( s1, n1, s2, n2-1,output);
	}
	
}

int main(){
	
	string s1;
     cin>>s1;
	string s2;
     cin>>s2;
     int n=s1.length();
     LCS(s1,n,s2,n,"");
     cout<<ans;
     
}
