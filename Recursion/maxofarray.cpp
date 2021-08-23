#include <iostream>
using namespace std;

int max(int arr[], int idx, int n){
    if(n==0){
        return arr[0];
    }
    
    int a=max(arr,  idx+1,  n-1);
    if(a<arr[idx]){
        return arr[idx];
    }
    
        return a;

    
}

int main(){
    
    int n;
    cin >> n;
    int arr[6];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    int p = max(arr, 0, n);
    cout << p << endl;
}

