#include<bits/stdc++.h>

using namespace std;

void KSelection(string s2, string temp,unordered_map<char,int>hash, int n, int k, int curr){
    if(k<0){
        return;
    }
    if(curr==n) {
        if(k==0)cout << temp << endl;
        return ;
    }
    for(int i=hash[s2[curr]];i>=0;i--){
        string temp1="";
        for(int j=0;j<i;j++){
             temp1+=s2[curr];
        }
        KSelection(s2,temp+temp1,hash,n,k-i,curr+1);
    }
}
int main(){
    string s,s2,temp;
    cin>>s;
    int k;
    cin>>k;
    unordered_map<char,int> hash;
    for(int i=0;i<s.length();i++){
        if(hash[s[i]]==0){
            s2+=s[i];
        }
        hash[s[i]]++;
    }
    KSelection(s2,"",hash,s2.length(),k,0);
}