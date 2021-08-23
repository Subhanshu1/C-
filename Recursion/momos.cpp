#include<iostream>
using namespace std;
void printstair(int n,string asf){
	if(n<=0){
	if(n==0){
		cout<<asf<<endl;
		return;
	}
	return;
}
cout<<"dwda"<<n<<endl;
  printstair( n-1, asf+"1");
  printstair( n-2, asf+"2");
  printstair( n-3, asf+"3");
  	
}
int main(){
	int n;
	cin>>n;
	printstair(n,"");
}
