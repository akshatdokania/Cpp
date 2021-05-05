#include<iostream>

using namespace std;

int main(){

    long long p;
    cin>>p;
    int tot_points=0;
    while(p>9){
        p=p-9;
        tot_points=tot_points+10;
    }
    tot_points+=p;
    cout<<tot_points;
    return 0;
}