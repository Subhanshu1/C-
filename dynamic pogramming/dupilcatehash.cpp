#include<bits/stdc++.h>

using namespace std;

void knapsack(int weight[], int value[], int n, int capacity) {
    for(int i=0; i<n; i++) {
        cout << weight[i] << " " << value[i] <<endl;
    }
    int dp[n+1][capacity+1];
    for(int i=0; i<=n; i++) {
        dp[i][0] = 0;
    }
    for(int i=0; i<=capacity; i++) {
        dp[0][i] = 0;
    }
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=capacity; j++) {
            if(weight[i-1]<=j) {
                dp[i][j] = max(dp[i-1][j], value[i-1]+dp[i-1][j-weight[i-1]]);
            }
            else dp[i][j] = dp[i-1][j];
        }
    }
    for(int i=0; i<=n; i++) {
        for(int j=0; j<=capacity; j++) {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n, weight[n], value[n], capacity;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> value[i];
        cout << value[i] << " " ;
    }
    cout << endl;
    for(int i=0; i<n; i++) {
        cin >> weight[i];
        cout << weight[i] << " ";
    }
    cout << endl;
    for(int i=0; i<n; i++) {
        cout << weight[i] << " " << value[i] <<endl;
    }
    cin >> capacity;
    knapsack(weight, value, n, capacity);
}
