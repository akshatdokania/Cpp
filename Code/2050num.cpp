#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int test_cases;
    cin>>test_cases;
    unsigned long long n;
    int count = 0;
    while(test_cases && cin>>n){
        count =0;
        int l = log10(n) + 1;
        while(n>=2050){
            int l = log10(n) + 1;
            if (l>4)
            {
                n = (n - (2050*(pow(10, l-4))));
            }
            else{
                n = n-2050;
            }
            count++;
        }
        if (n==0)
        {
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        test_cases -= 1;
    }
    return 0;
}