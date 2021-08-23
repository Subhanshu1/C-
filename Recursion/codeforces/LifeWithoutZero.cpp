#include<iostream>
#include<math.h>
#include<climits>
using namespace std;

int main(){
  int number1;
  cin>>number1;
  
  int number2;
  cin>>number2;
  
  int a=0,b=0,c=0;
  
  int sum=number1+number2;
  int j=0;
  while(number1>0){
      int mod=number1%10;
      if(number1%10>0){
          a+=mod*pow(10,j);
          j++;
      }
      number1=number1/10;
      
  }
  j=0;
  while(number2>0){
      int mod=number2%10;
      if(number2%10>0){
          b+=mod*pow(10,j);
          j++;
      }
      number2=number2/10;
      
  }
  j=0;
  while(sum>0){
      int mod=sum%10;
      if(sum%10>0){
          c+=mod*pow(10,j);
          j++;
      }
      sum=sum/10;
      
  }
  if((a+b)==c){
      cout<<"YES";
  }
  else cout<<"NO";
}