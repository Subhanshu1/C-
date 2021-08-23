#include<iostream>
#include<vector>
using namespace std;

vector<int> temp;
void CoinChange(int n,int *arr,int sum,int start){
    if(start>n || sum<0){
        return;
    }
   
    if(sum==0){
        for(int i=0;i<temp.size();i++){
            cout<<temp[i]<<"-";
        }
        cout<<endl;
        return;
    }
            temp.push_back(arr[start]);
         CoinChange(n,arr,sum-arr[start],start+1);
         temp.pop_back();
          CoinChange(n,arr,sum,start+1);

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
    CoinChange(n,arr,sum,0);
}