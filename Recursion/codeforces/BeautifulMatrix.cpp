#include <iostream>

using namespace std;

int main()
{    int arr[5][5];
    int a1,b;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){
                a1=i;
                b=j;
            }
        }
    }
    int calc=abs(a1-2)+abs(b-2);
    cout<<calc;

    return 0;
}