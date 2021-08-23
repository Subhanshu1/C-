#include<iostream>
#include <cstring>
using namespace std;

int **dp;
bool ispalindrome(string s,int n,int i,int j){
	
	while (i <= j) {
		if (s[i] != s[j])
			return false;
		i++, j--;
	}

	return true;
}

int palindrome(string s,int n,int i,int j,int **dp){
	int ans=INT_MAX;
	if(i>=j){
		return 0;
	}
	if(ispalindrome(s,n,i,j)==true){
		return 0;
	}
	if(dp[i][j]!=-1){
		return dp[i][j];
	}
	for(int k=i;k<j;k++){
		int left,right;
			if(dp[i][k]!=-1){
				left=dp[i][k];
			}
			else{
				left=palindrome( s,n,i,k,dp);
				dp[i][k]=left;
			}
			if(dp[k+1][j]!=-1){
				right=dp[k+1][j];
			}
			else{
				right=palindrome( s,n,k+1,j,dp);
				dp[k+1][j]=right;
			}
			int temp=left+right+1;
			
				if(ans>temp){
					ans=temp;
				}
	}
	return dp[i][j]=ans;
}


int palindrome(string s,int n,int **dp){
	
	return palindrome( s,n,0,n-1,dp);
}


int main(){
	string s;
	cin>>s;
	int n;
	n=s.length();
	dp=new int*[n+1];
         for(int i=0;i<n+1;i++){
             dp[i]=new int[n+1];
             for(int j=0;j<n+1;j++){
                 dp[i][j]=-1;
             }
         }
	int a=palindrome(s,n,dp);
	cout<<a;
}
