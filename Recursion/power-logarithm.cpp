#include<iostream>
#include<cmath>
using namespace std;

int powerLogarithmic(int x,int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
	
    int a=powerLogarithmic( x, n/2);
    return pow(x,n/2)*a;
   }
   else{
   	 int a=powerLogarithmic( x, n/2);
    return pow(x,n/2)*a*x;
   }
    
}

int main(){
    int x,n; cin>>x>>n;
    cout<<powerLogarithmic(x,n);
}


//it is a optimse solution
/*
this question represent a GP series 
a=n,r=1\2;
n,n/2,n/4,.....,1 we have k terms
a(k)=ar^k-1=n(1/2)^k-1=1;
Take log on both side 

WE can time complexity of logn.

*/
