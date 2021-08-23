#include<bits/stdc++.h>
using namespace std;
 
void solve(int N,int Q,int arr[],int arr1[]){
    sort(arr,arr+N);
    for (int i=0;i<Q;i++){
    	int sum=0,count=0;
        for(int j=0;j<N;j++){
              if(arr[j]<=arr1[i]){
                sum=arr[j]+sum;
                count++;
            }
            
           }
           cout<<count<<" "<<sum<<endl;
           
    }
}
int main(){
    int N,Q;
    cin>>N;
    int *arr=new int[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cin>>Q;
    int *arr1=new int[Q];
    for(int i=0;i<Q;i++){
        cin>>arr1[i];
    }
  solve( N, Q, arr,arr1);

}

