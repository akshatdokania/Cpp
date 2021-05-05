#include<iostream>

using namespace std;

int main(){

    long long x;
    cin>>x;
    int i=0;
    int count=0;
    while(i<x){
        i=i+1;
        i*=2;
        count++;
    }
    cout<<count;

    return 0;
}