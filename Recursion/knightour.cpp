#include<iostream>
using namespace std;
void display(int ** chess,int n){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				cout<<chess[i][j]<<" ";
			}
			cout<<endl;
		}
		cout<<endl;
}
void printKnightsTour(int **chess,int n,int r,int c,int upcomingMove){
	if(r<0 || c<0 || r>=n || c>=n || chess[r][c]!=0){
		return ;
	}
	 else if(upcomingMove ==n*n){
		chess[r][c]=upcomingMove;
		display(chess, n);
		chess[r][c] = 0;  
		return;
	}

				chess[r][c]=upcomingMove;
		printKnightsTour(chess,n, r - 2, c + 1, upcomingMove + 1);
        printKnightsTour(chess,n, r - 1, c + 2 , upcomingMove + 1);
        printKnightsTour(chess,n, r + 1, c + 2 , upcomingMove + 1);
        printKnightsTour(chess,n, r + 2, c + 1 , upcomingMove + 1);
        printKnightsTour(chess,n, r + 2, c - 1 , upcomingMove + 1);
        printKnightsTour(chess,n, r + 1, c - 2 , upcomingMove + 1);
        printKnightsTour(chess,n, r - 1, c - 2 , upcomingMove + 1);
        printKnightsTour(chess,n, r - 2, c - 1 , upcomingMove + 1);
               chess[r][c]=0;
}

int main(){
	int n;
	cin>>n;
	int r,c;
	cin>>r>>c;
	int **chess=new int*[n];
		for(int i=0;i<n;i++){
			chess[i]=new int[n];
			for(int j=0;j<n;j++){
				chess[i][j]=0;
			}
		}
		
	printKnightsTour(chess,n,r,c,1);
	return 0;
}
