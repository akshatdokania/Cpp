#include<iostream>
#include<cstring>

using namespace std;

int main(){

    string a;
    string b;
    cin>>a;
    cin>>b;
    if(a.compare(b)==0){
        cout<<"YES";
    }
    string a1 = a.substr(0, (a.length()/2 - 1));
    string a2 = a.substr(a.length()/2, a.length());
    string b1 = b.substr(0, (b.length()/2 - 1));
    string b2 = b.substr(b.length()/2, b.length());



    if((a1.compare(b1)==0 && a2.compare(b2)==0)|| (a1.compare(b2)==0 && a2.compare(b1)==0)){
        cout<<"YES";
    } 
    else 
    cout<<"NO";

    return 0;
}