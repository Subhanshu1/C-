#include<bits/stdc++.h>

using namespace std;




int Mincost(vector<vector<int> >&mat,int i,int j){
    
    int n=mat.size();
    int m=mat[0].size();
    
    if(i==0&&j==0){
        return mat[i][j];
    }
    
    if(i>n || j>m){
        return INT_MAX;
    }
    
    int nilesh=min(Mincost(mat,i,j-1),Mincost(mat,i-1,j));
    mat[i][j]+=min(Mincost(mat,i,j-1),Mincost(mat,i-1,j));
    

}


int main(){
    
    int n,m;
    cin>>n>>m;
    
    vector<vector<int> >mat(n,vector<int>(m,0));
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>mat[i][j];
    }
    
    cout<<Mincost(mat,n,m);

    
}
