#include<iostream>

using namespace std;

void findMax(int a[], int b[], int i, int n){
    int f1 = 0, f2=0;
    int max1 =0, max2=0;
    int a0 = a[i-1]*b[i-1];
    int a1 = a[i]*b[i];
    int a2 = a[i]*b[i-1];
    int a3 = a[i-1]*b[i];
    int b0 = a[i+1]*b[i+1];
    int b2 = a[i]*b[i+1];
    int b3 = a[i+1]*b[i];
    int pos =0;

    if(i!=0 && i<n-1){
        if(a0 + a1 > a2 + a3){
            max1 = a0 + a1;
            f1=0;
        }
        else{
            max1 = a2 + a3;
            f1 = 1;
        }
        if(b0 + a1 > b2 + b3){
            max2 = b0 + a1;
            f2=0;
        }
        else{
            max2 = b2 + b3;
            f2=1;
        }        
    }
    else if(i==0 && i<n-1){
        if(b0 + a1 > b2 + b3){
            max2 = b0 + a1;
            f2=0;
        }
        else{
            max2 = b2 + b3;
            f2=1;
        }

    }
    else if(i>=0 && i==n-1){
        if(a0 + a1 > a2 + a3){
            max1 = a0 + a1;
            f1=0;
        }
        else{
            max1 = a2 + a3;
            f1 = 1;
        }
    }
    if(max1>max2){
            if(f1==1){
                int temp = a[i-1];
                a[i-1]=a[i];
                a[i]=temp;
                return;
            }
            else
            return;
        }
    else{
        if(f2==1){
            int temp = a[i+1];
            a[i+1]=a[i];
            a[i]=temp;
            return;
        }
        else
        return;
    }
}



int main(){
    int n;
    cin>>n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int pos = -1;
    int max =0;
    for(int i=0; i<n; i++){
        cin>>b[i];
        if(b[i]>max){
            max = b[i];
            pos = i;
        }
    }
    int f=0;
    findMax(a, b, pos, n);
    int sum =0;
    for(int i=0; i<n; i++){
        sum += a[i]*b[i];
    }
    cout<<sum<<endl;
    return 0;
}