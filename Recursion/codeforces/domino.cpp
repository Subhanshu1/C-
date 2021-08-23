#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int lower=0,upper=0;
    int odd=0,even=0;
    while(t--){
        int x;
        int y;
        cin>>x;
        cin>>y;
      lower+=x;
      upper+=y;
      if(x%2==0 || y%2==0)even++;
      
      else odd++;
    }
    if(lower%2==0 && upper%2==0){
        cout<<"0";
    }
    else if(lower%2==1 && upper%2==1){
        cout<<"-1";
    }
    else{
        if(odd!=even){
            cout<<"-1";        
        }
        else cout<<"1";
    }
}