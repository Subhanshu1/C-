#include<bits/stdc++.h>
using namespace std;


class Solution{
    public:
    
    int longestCommonSubstr (string S1, string S2, int n, int m,int ans=0,int maxx=0)
    {  int dp[n+1][m+1];
    for(int i=0;i<=n;i++){
        for(int j=0;j<=m;j++){
            dp[i][j]=-1;
        }
    }
        int count=0;
        if(n==0 || m==0)  return maxx;
	 if(dp[n][m]!=-1){
	     return dp[n][m];
	 }
	if(S1[n-1]==S2[m-1]){
	    ans=ans+1;
	    if(ans>maxx){
		return dp[n][m]=longestCommonSubstr(S1,S2, n-1,m-1,ans,maxx+1);
	    }
	    else{
	        	return dp[n][m]=longestCommonSubstr(S1,S2, n-1,m-1,ans,maxx);
	    }

	}
	else{

		return dp[n][m]=max(longestCommonSubstr(S1,S2, n-1,m,ans=0,maxx),longestCommonSubstr(S1,S2, n,m-1,ans=0,maxx));
	}

    }
};



int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}

