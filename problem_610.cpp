#include<bits/stdc++.h> 
using namespace std;

int main(){
	int n;
	cin >> n ;

	if(n % 2 != 0){
		cout << 0 << endl;
	} else {
		int x = n / 2 ;
		cout << (x-1) / 2 << endl;
	}
}