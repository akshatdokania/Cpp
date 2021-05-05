#include<iostream>
#include<algorithm>

using namespace std;

int mostFrequent(int arr[], int n, int* freq)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
    *freq = max_count;
    return res;
}

int main(){

    int n,k;
    cin>>n>>k;
    int a[n];
    int* freq;
    int num = mostFrequent(a, n, freq);
    int required = n - *freq;
    
    return 0;
}