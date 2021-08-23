#include<iostream>
using namespace std;

/*
7
1 2 3 4 5 6 7
3
4
5
9
*/
int searchoperation(int n,int arr[],int key)
{int s=0;
 int e=n-1;



    while (s<=e)
    {   
        int mid=(s+e)/2;

    if(arr[mid]==key){
        return mid;   
    }else if(arr[mid]<key){
        s=mid+1;
    }else{
        e=mid-1;
    }
        
    }
	return -1;
    

}
int main(){
	
	
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int t;

	cin>>t;
	int a=t;
	int temp[t+1];
	while(t--){
    int key;
    cin>>key;
    
       
       temp[t]=searchoperation(n,arr,key);
	
 
    }
    
 for(int i=a-1;i>=0 ;i--){
       cout<<temp[i]<<endl;
	}
    }


