#include <iostream>
#include <string>
using namespace std;

void printPermutations(string input,string output){
    if(input.length()==2){
       cout<<output<<endl;
        return;
    }
 for(int i=0;i<input.length();i++){
     printPermutations(input.substr(0,i)+input.substr(i+1),output+input[i]);
 }
} 
void printPermutations(string input){

    printPermutations(input,"");
    
}
int main() {
    string input;
    cin >> input;
    printPermutations(input);
    return 0;
}
