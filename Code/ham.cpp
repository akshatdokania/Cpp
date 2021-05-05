#include<iostream>
#include<cmath>

using namespace std;

int dist(string s, string t){
    int count =0;
    for(int i=0; i<s.length(); i++){
        if(((s[i] - '0')^(t[i]-'0'))==1){
            count++;
        }
    }
    return count;
}

std::string toBinary(int n, int len)
{
    std::string r;
    while(len--) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(){

    string s; string t;
    cin>>s>>t;
    int distance = dist(s,t);
    int flag=0;
    for(int i=0; i<pow(2,s.length()); i++){
        string bin = toBinary(i, s.length());
        if((dist(bin,s)==dist(bin,t)&&dist(bin,s)==distance)){
            flag=1; 
            cout<<bin<<endl;
            break;
        }
    }
    if(flag==0){
        cout<<"Can't make friends"<<endl;
    }
    

    return 0;
}