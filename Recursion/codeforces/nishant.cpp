#include<iostream>
using namespace std;

bool SubsetSum(int *arr,int n,int sum){
    if((n==0 && sum!=0) || sum<0)  return false;
    if(sum==0){
        return true;
    }

    if(arr[n-1]<=sum){
       return  (SubsetSum(arr,n-1,sum-arr[n-1]) || SubsetSum(arr,n-1,sum));
    }
    else if(arr[n-1]>sum){
        return SubsetSum(arr,n-1,sum);
    }
}
int main(){
    int n;
    cin>>n;
    int * arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    bool ans=SubsetSum(arr,n,sum);
    if(ans==true) cout<<"True";
    else cout<<"False";
}