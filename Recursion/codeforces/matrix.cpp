#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int ans=1;
        int j=0,k=0;
        bool flag=0;
        int i=1;
        for( i=1;ans<=n;i++){
            if(ans==n){
                j++;
                flag=1;
                break;
            }
           if(i%2==1){
               ans=ans+i;
               
               j++;
           }
        }
        if(flag==0){
            ans=ans-i+1;
            
        
        }
        if(flag==0){
        for( k=1;k<j;k++){
            
           ans++;
           if(ans==n){
               k++;
                flag=1;
                break;
            }
           }
        }
        /*-----Perfect Square--------------------------------*/
        int m=j;
        ans=0;
        if(flag==0){
           
        for( k=1;k<=j;k++){
           ans=+k*k;
        
           if(ans==n){
               k++;
                flag=1;
                break;
            }
           }
        }
        if(flag==0){
            k--;
        for( j=1;j<m-1;j++){
           ans--;
          
           if(ans==n){
               j++;
                flag=1;
                break;
            }
           }
        }
        cout<<k<<" "<<j<<endl;
    }
    }













