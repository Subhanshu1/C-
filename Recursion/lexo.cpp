#include<iostream>
using namespace std;

void lexico(int n,int i){
	if(i>=n){
		return;
	}
	cout<<i<<endl;
	for(int j=0;j<=9;j++){
		lexico(n, (i*10)+j);
	}
}
void lexico(int n){
	for(int i=1;i<=9;i++){
		lexico(n,i);
	}
}
int main(){
	int n;
	cin>>n;
    lexico(n);
}
