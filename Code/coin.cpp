#include<iostream>

using namespace std;

long fact(int n){
    int f =1;
    for(int i=2; i<=n; i++){
        f*=i;
    }
    return f;
}

int main(){
    int r, c;
    cin>>r>>c;
    long sum=0;
    int count[r+c]={0};
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            count[i+j]++;
        }
    }
    for(int i=1; i<r+c-2; i++){
        sum+= fact(count[i]);
    }
    cout<<sum<<endl;
    return 0;
}