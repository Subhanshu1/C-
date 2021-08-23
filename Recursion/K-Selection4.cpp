#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;


vector<char> nilesh;


void findword1(int n,vector<char> &nums,vector<vector<char>> &ans,vector<char>  temp, int start,unordered_map<char,int> &hash,int k){
    
 
     if(temp.size()==k){
        
            ans.push_back(temp);
            return;
        }
        for(int i=start;i<nilesh.size();i++){
          
        if(hash[nilesh[i]]>0){
            hash[nilesh[i]]--;
                temp.push_back(nilesh[i]);
                findword1(n,nums,ans,temp,i,hash,k);
                temp.pop_back();
                hash[nilesh[i]]++;
            }
            
         }
         
}

void word1(int n,vector<char> &nums,int k){
    unordered_map<char,int> hash;
    for(int i=0;i<n;i++){
        if(hash.count(nums[i])==0){
            nilesh.push_back(nums[i]);
           
        }
         hash[nums[i]]++;
    }
    vector<vector<char>> ans;
    vector<char> temp;
    findword1(n,nums,ans,temp,0,hash,k);
     for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    
    std::vector<char> nums(n) ;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int k;
    cin>>k;
    word1(n,nums,k);
   
    
}