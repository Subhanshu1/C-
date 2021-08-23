#include <bits/stdc++.h>
using namespace std;



int countMinStepsToOne(int n)
{   int x=INT_MIN,y=INT_MIN,z=INT_MIN;
cout<<"this "<< n<<endl;
	if(n==1){
     return 0;
    }
    if(n%3==0){
    	cout<<"n%3"<<" "<<x<<endl;
        x=countMinStepsToOne(n/3);
        
    }
     if(n%2==0){
     	 cout<<"n%2"<<" "<<y<<endl;
        y=countMinStepsToOne(n/2);
        
       
    }
        cout<<"n-1"<<" "<<z<<endl;
        z=countMinStepsToOne(n-1);
        
 
    
   return 1+max(x,max(y,z));
}

int main(){


	int n;
	cin >> n;
	cout << countMinStepsToOne(n);
}
