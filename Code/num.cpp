#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n, m;
    cin>>n>>m;
    vector<int> arr;
    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        arr.push_back(temp);
    }
    while(m--){
        vector<int> a (arr);
        int m1, m2;
        cin>>m1>>m2;
        --m1;--m2;
        for(int i=m2; i>=m1+1; i--){
            a[i] = 2*a[i] + a[i-1];
            a[i-1] = a[i];
        }
        int ret = a[m1] % (pow(10,9)+7);
        cout<<ret<<endl;
    }
    return 0;
}