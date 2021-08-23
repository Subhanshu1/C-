#include<iostream>
using namespace std;
bool subsetsum(int arr[],int N,int Sum){
	int t[N+1][Sum+1];
	for(int i=0;i<N+1;i++){
		for(int j=0;j<Sum+1;j++){
			t[0][j]=false;
			t[i][0]=true;
		}
	}
	for(int i=1;i<N+1;i++){
		for(int j=1;j<Sum+1;j++){
			if(arr[i-1]<=j){
				t[i][j]=t[i-1][j-arr[i]] || t[i-1][j];
			}
			else{
				t[i][j]=t[i-1][j];
			}
		}
	}
	return t[N][Sum];
}
int main()
{
    int set[] = { 3, 34, 4, 12, 5, 1 };
    int Sum = 9;
    int N = sizeof(set) / sizeof(set[0]);
    if (subsetsum(set, N, Sum) == true)
        printf("Found a subset with given sum");
    else
        printf("No subset with given sum");
    return 0;
}
