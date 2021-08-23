#include<iostream>
#include<cstring>
using namespace std;

int **dp;
int matrixMultiplication(int N, int arr[],int i,int j,int **dp)
    {
        if(i>=j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=INT_MAX;
        for(int k=i;k<j;k++){
           int temp= matrixMultiplication( N, arr, i, k,dp)+matrixMultiplication(N,  arr, k+1, j,dp)+
           arr[i-1]*arr[k]*arr[j];
            if(temp<ans){
                ans=temp;
            }
        }
        return dp[i][j]=ans;
    }
    int matrixMultiplication(int N, int arr[])
    {    dp=new int*[N+1];
         for(int i=0;i<N+2;i++){
             dp[i]=new int[N+1];
             for(int j=0;j<N+1;j++){
                 dp[i][j]=-1;
             }
         }
        return matrixMultiplication(N,arr,1,N-1,dp);
    }
    
    int main(){
    	int N;
    	cin>>N;
    	int *arr=new int[N];
    	for(int i=0;i<N;i++){
    		cin>>arr[i];
		}
    	int a=matrixMultiplication( N, arr);
    	cout<<a;
	}
