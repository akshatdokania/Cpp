#include<iostream>
#include<cmath>

using namespace std;

class node{
    public: int data;
    node* l;
    node* r;

    node* newNode(int val){
        node* temp = new node();
        temp->data = val;
        temp->l=NULL;
        temp->r=NULL;
    }

    void insert(node** root, int val){
        node* temp = newNode(val);
        
    }
};


int main(){

    node* tree;
    int x,k;
    cin>>x>>k;
    int n = pow(2, x);
    node* root = new node(1);
    for(int i=1; i<=n; i++){
        insert(i);
    }

    return 0;
}