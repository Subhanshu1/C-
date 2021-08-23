#include <iostream>
using namespace std;

void lexicographicalOrder(int num,int a){
   if(a>num){
       return;
   }
   cout<<a<<endl;
    a=a*10;
   lexicographicalOrder(num, a);
   
    for(int i=1;i<=9&& a<num;i++){
         a=a+1;
         cout<<a<<endl;
      }
      
   }
void lexicographicalOrder(int num){
    int a=1;
    for(int i=1;i<=9;i++){
	lexicographicalOrder(num,i);
}
}

int main(){
	int num;
	cin>>num;
  	lexicographicalOrder(num);
}
