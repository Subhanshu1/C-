#include<iostream>
using namespace std;

void allIndexes(int input[], int size, int x, int output[],int idx ,int fsf) {
       if(idx==size){
           return ;
       }
    if(input[idx]=x){
         cout<<fsf;
    allIndexes(input,  size,  x,  output,idx+1 , fsf+1);
        output[fsf]=idx;
 
    }
   
    else{
         allIndexes(input,  size,  x,  output,idx+1 , fsf);
    }
   
}

int allIndexes(int input[], int size, int x, int output[]) {
    int fsf=0;
  allIndexes(input,size,x,output,0,fsf);
    return fsf;
}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
        cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    

}



