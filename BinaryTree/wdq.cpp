#include<iostream>
#include<vector>
using namespace std;
 int output=0;
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
       int count=0;
        int i=speed.size()-1;
        while(i!=-1){
            for(int j=0;j<dist.size();j++){
               dist[j]=dist[j]-speed[i]; 
            }
            if(count==0){
                output++;
                i--;
                count++; 
            }
            else if(dist[count]>=0){
                output++;
                i--;
                count++;
            }
            else{
                break;
            }
            
            
        }
        return output;
    }
    int main(){
    	int n;
    	cin>>n;
    	int dist[n];
    	for(int i=0;i<n;i++){
    		cin>>dist[i];
		}
			int speed[n];
    	for(int i=0;i<n;i++){
    		cin>>speed[i];
		}
		int a=eliminateMaximum(dist,  speed,n);
		cout<<a;
	}
