#include<iostream>
#include<cmath>

using namespace std;

int main(){

    long a, b;
    cin>>a>>b;
    int c= a+b;
    int la = log10(a) + 1;
    int ar[la];
    int lb = log10(b) + 1;
    int br[lb];
    int lc = log10(c) + 1;
    int cr[lc];
    for(int i=0; i<la; i++){
        ar[i] = a%10;
        a = a/10;
    }
    for(int i=0; i<lb; i++){
        br[i] = b%10;
        b = b/10;
    }
    for(int i=0; i<lb; i++){
        cr[i] = c%10;
        c = c/10;
    }
    int azeros =0, bzeros =0, czeros=0;
    for(int i=0; i<la; i++){
        if(ar[i] == 0){
            for(int j=i; j<la-1; j++){
                ar[j] = ar[j+1];
            }
            azeros++;
        }
    }
    for(int i=0; i<lb; i++){
        if(br[i] == 0){
            for(int j=i; j<lb-1; j++){
                br[j] = br[j+1];
            }
            bzeros++;
        }
    }
    for(int i=0; i<lc; i++){
        if(cr[i] == 0){
            for(int j=i; j<lc-1; j++){
                cr[j] = cr[j+1];
            }
            czeros++;
        }
    }
    a =0; b=0; c=0;
    for(int i=la-azeros-1; i>=0; i--){
        a = a*10 + ar[i];
    }
    for(int i =lb-bzeros-1; i>=0; i--){
        b = b*10 + br[i];
    }
    for(int i =lc-czeros-1; i>=0; i--){
        c = c*10 + cr[i];
    }
    if(c == a+b){
        cout<<"YES";
    }
    else
    cout<<"NO";
    return 0;
}