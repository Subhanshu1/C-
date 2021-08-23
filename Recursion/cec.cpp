#include <bits/stdc++.h>
using namespace std;

vector<int> nearlysorted(int arr[],int N, int k){
  vector<int> pq;
  priority_queue<int,vector<int>,greater<int>> maxh;
  int i;
  for( i=0;i<k;i++){
      maxh.push(arr[i]);
  }
  int j=0;
  for(i=k,j=0;i<N;i++,j++ && k<N){
      pq.push_back(arr[j]);
      maxh.push(arr[i]);
      maxh.pop();
     
  }
  while(!maxh.empty()){
      pq.push_back(maxh.top());
      maxh.pop();
  }
  return pq;
}

int main() {
int t;
cin>>t;
while(t--){
    int N;
    cin>>N;
    int *arr=new int [1+N];
    int k;
    cin>>k;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
vector<int> output = nearlysorted(arr, N, k);
    for(int i = 0; i < output.size(); i++)
        cout << output[i] << " ";
}
	return 0;
}
