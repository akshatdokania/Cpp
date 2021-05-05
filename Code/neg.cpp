#include <iostream>
using namespace std;

void swap(int a[], int i, int j){
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

int main() {
	int a[] = {-12, -2, 3, 5, -7, 9};
	int j=0;
	for(int i=0; i<6; i++){
	   if(a[i] < 0){
	       swap(a, i, j);
	       j++;
	   } 
	}
	for(int i=0; i<6; i++){
	    cout<<a[i]<<" ";
	}
	return 0;
}