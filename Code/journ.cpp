#include<iostream>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n, p;
        cin>>n>>p;
        int count=0;
        for(int i=1; i<n; i++){
            for(int j=i+(p-i%p); j<=n ; j+=p)
            count++;
        }
        cout<<count<<endl;
    } 
    return 0;
}