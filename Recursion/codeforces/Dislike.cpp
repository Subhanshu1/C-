#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        int num=0;
        cin >> k;
        for(int i=0; i<k; i++) {
            num++;
            while(num%3==0 || num%10==3) {
                num++;
            }
            
        }
        cout << num << endl;
    }
}