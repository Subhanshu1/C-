#include<bits/stdc++.h>
using namespace std;

void reverse(string str){
	if(str.empty()){
		return ;
	}

	string ros=str.substr(1);
    a= reverse(ros);
     cout<<str[0];
}
int main(){
	reverse("binod");
}
