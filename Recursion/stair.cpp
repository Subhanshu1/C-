#include <iostream>
using namespace std;
/*
// recurive + memoisation
int printStairPaths(int n,int *arr){
	if(n==0){
    	return 1;
	}
    else if(n<0){
    	return 0;
    }
	if(arr[n]>0){
		return arr[n];
	}
   cout<<"dwdw"<<n<<endl;
    int num1=printStairPaths(n - 1,arr);
    int num2=printStairPaths(n - 2,arr);
    int num3=printStairPaths(n - 3,arr);
    int sum=num1+num2+num3;
    arr[n]=sum;
   
	return sum;
    
}
*/
int printStairPaths(int n){
	int *dp=new int[n+1];
	
	dp[0]=1;
	for(int i=1;i<n+1;i++){
		if(i==1){
		   dp[i]=dp[i-1];
		}
		else if(i==2){
			dp[i]=dp[i-1]+dp[i-2];
		}
		else{
			dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
		}
		
	}
	return dp[n];
}
int main(){

    int n;
    cin >> n;
    /*
    int *arr=new int[n+1];
    for(int i=0;i<n+1;i++){
    	arr[i]=0;
	}
	*/
   int a= printStairPaths(n);
   cout<<a;
   return 0;
}
