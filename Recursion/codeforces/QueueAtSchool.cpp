#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int t;
    cin>>t;
    char *s=new char[n];
    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    while(t--){
        for(int i=0;i<n-1;i++){
            if(s[i]=='B' && s[i+1]=='G'){
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                i++;
            }

        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
}
