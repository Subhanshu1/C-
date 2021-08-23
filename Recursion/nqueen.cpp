#include<bits/stdc++.h>
#include<string>

using namespace std;




void Queenproblem(vector<vector<int> >&mat,string asf,int row ){
    
    
    
    
    int n = mat.size();
    
    if(row == n){
        cout<<asf<<endl;
        return;
    }
    
    
    for(int col = 0; col<n; col++){
          
        mat[row][col] = 1;
        Queenproblem(mat,asf+std::to_string(row)+"_"+ std::to_string(col)+",",row+1);
        mat[row][col] = 0;
    }
    

    
    
    
    
    
    
    
    

    

}


int main(){
    
    int n;
    cin>>n;
    
    vector<vector<int> >mat(n,vector<int>(n,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        cin>>mat[i][j];
    }
    
    Queenproblem(mat," ",0);
    

    
}
