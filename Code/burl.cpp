#include<iostream>

using namespace std;

int main(){

    long t;
    cin>>t;
    while(t--){
        long n,m,k;
        cin>>n>>m>>k;
        if( m*n -1 ==k){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }

    return 0;
}