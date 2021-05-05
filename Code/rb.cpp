#include <iostream>
#include <cmath>



using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int remaining;
		int r , b , d;
		cin >> r >> b >> d;
		remaining = ceil((max(r,b) - min(r,b))/(min(r,b)*1.0));
		if(remaining <= d)
			cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}