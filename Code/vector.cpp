#include<iostream>
#include<vector>

using namespace std;


template <class T>
void display(vector<T>& v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    vector<int> v1;
    int element;

    for(int i=0; i<5; i++){
        cin>>element;
        v1.push_back(element);
    }
    //v1.pop_back();
    display(v1);
    vector<int> :: iterator iter = v1.begin();
    v1.insert(iter +1,5 , 0);
    display(v1);
    cout<<v1.at(5); 

    return 0;
}