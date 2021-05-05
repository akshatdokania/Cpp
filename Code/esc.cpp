#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int time=0;
        for(int i=n-1; i>=1; i--){
            int min = a[i]>a[i-1]?a[i-1]:a[i];
            a[i-1]=a[i]>a[i-1]?(a[i]-a[i-1]):(a[i-1]-a[i]);
            time+=min;
        } 
        time+=a[0];
        if(time<=m){
            cout<<"YES";
        }
        else
        cout<<"NO"<<endl;
    }

    return 0;
}