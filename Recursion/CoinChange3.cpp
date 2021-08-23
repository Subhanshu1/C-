#include<iostream>
#include<vector>
using namespace std;

vector<int> temp;
void CoinChange(int n,int *arr,int sum,int start){
    if(start>n || sum<0){
        return;
    }
   
    if(sum==0){
        bool temp1=false;
        for(int i=0;i<temp.size();i++){
            if(temp[i]==temp[i+1]){
                temp1=true;
            }
        }
        if(!temp1){
            for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<"-";
            }
            cout<<endl;
        }
        
        return;
    }
         for(int i=start;i<n;i++){
             
             temp.push_back(arr[i]);
             
              CoinChange(n,arr,sum-arr[i],start+1);
              temp.pop_back();
             
         }

}
int main(){
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum;
    cin>>sum;
    CoinChange(n,arr,sum,-1);
}