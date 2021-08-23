#include <iostream>
#include<math.h>
using namespace std;

void Simple(int x,int m,int n,int start){
    long long ans;
    if(x==1) ans=m*x; 
    else  ans=(x*pow(x,m)-1)/(x-1);
   int Sub=(int)ans%n;
   cout<<Sub<<endl;
}
int main() {
	int t;
	cin>>t;
	while(t--){
	    int x,m,n;
	    cin>>x>>m>>n;
	    
	    Simple(x,m,n,1);
	}
	return 0;
}
