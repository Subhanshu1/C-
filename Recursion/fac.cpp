#include<iostream>
using namespace std;

int factorial(int x,int n){
	if(n==0){
		return 1;
	}
 	int a=factorial(x,n-1);
	return x*a;
}
int main(){
	int x;
	cin>>x;
	int n;
	cin>>n;
int b=	factorial(x,n);
   cout<<b;
}
