#include<iostream>
#include<string>

using namespace std;

int main() {
    
    int n,m;
    cin>>n>>m;
    
    for(int i=0; i<n; i++){
        if(i>=m){
            cout<<"Too Many Requests\n";
        }
        else{
            cout<<"OK\n";
        }
        
    }
    
    return 0;
}
