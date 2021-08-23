#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
  int ans=n*n;
	if(ans%2==0){
	    cout<<ans/2;
	}
	else cout<<(ans-1)/2;
	return 0;
}
