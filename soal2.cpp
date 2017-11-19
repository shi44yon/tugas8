#include <iostream>

using namespace std;

int main() {
	int n, bil[n];
	bool cek = false;
	cout<<"n: ";
	cin>>n;
	for(int i = 0; i < n; i ++) {
		cout<<"angka ke - "<<i + 1<<":";
		cin>>bil[i];
	}
	cout<<"even:"<<endl;
	for(int j = 0; j < n; j ++) {
		if(bil[j] % 2 == 0) {
		cout<<bil[j]<<endl;
		cek = true;
		}
	}
	if(!cek) {
		cout<<"not found";
	}
}
