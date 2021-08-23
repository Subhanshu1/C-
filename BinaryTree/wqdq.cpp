#include <bits/stdc++.h> 

using namespace std;

void solve(){
int n;
cin>>n;
cout<<n<<" ";
int a[n];
int sum=0;
if(n==1)
{
    cout<<"0";
    return;
}
for(int i=0;i<n;i++)
{cin>>a[i];
//cout<<sum<<" ";
sum+=a[i];
}

if(sum%n!=0)
{
    cout<<"-1";
    return;
}
int count=0;
sort(a,a+n);
for(int i=n-1;i>=0;i--){
    if(a[i]>(sum/n)){
        count++;
    }
    else
    break;
}

cout<<count;

}
int main() {
    int t;
    cin>>t;
while (t)
{
    solve();
    cout<<endl;
    t--;

}

    return 0;
}
