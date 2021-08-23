#include <iostream>
using namespace std;

int cs(int arr[], int n){
    
    int *dp=new int[n+1];
    dp[n]=0;
    for(int i = n-1 ; i >=0; i--){
      dp[i] = 0;
        int b = INT_MAX;
        for (int j = 1; j <= arr[i] && i + j <= n; j++)
        {
            b = min(b , dp[i+j]);
        }
        if (b != INT_MAX)
        {
            dp[i] += b + 1;
        }
        else dp[i] = INT_MAX;
	

}
return dp[0];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}
