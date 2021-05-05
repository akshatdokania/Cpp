#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i =0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n-1-i; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    int max =0; int m=1;
    for(int i=0; i<n; i++){
        if(a[i+1]== a[i] + 1){
            m++;
        }
        else{
            max = max>m?max:m;
            m=1;
        }
    }
    cout<<max;
    return 0;
}