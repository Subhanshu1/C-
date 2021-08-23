#include<bits/stdc++.h>

using namespace std;

void toggle(int game[3][3], int i, int j) {
    if(i<0 || j<0 || i>=3 || j>=3) return;
    if(game[i][j] == 1) game[i][j] = 0;
    else game[i][j] = 1;
}

int main() {
    int arr[3][3], game[3][3];
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cin >> arr[i][j];
            game[i][j] = 1;
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(arr[i][j]%2!=0) {
                toggle(game, i, j);
                toggle(game, i+1, j);
                toggle(game, i-1, j);
                toggle(game, i, j+1);
                toggle(game, i, j-1);
            } 
        }
    }
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << game[i][j] ;
        }
        cout << endl;
    }
}