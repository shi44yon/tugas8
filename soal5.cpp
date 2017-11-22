#include <iostream>

using namespace std;

void perfectNumber(int n) {
	int i, jumlah, pN[i];
	for(i = 0; i < n; i++) {
		if(n % i+1 == 0) {
			pN[i] = i+1;
		}else {
			pN[i] = 0;
		}
	}
	for(int j = 0; j < n; j++) {
		jumlah += fibo[j];
	}
	if(jumlah == n){
		cout<<"Perfect Number";
	}else {
		cout<<"Not a Perfect Number";
	}
}

int main() {
	int n;
	cout<<"Masukan Angka: ";
	cin>>n;
	
	perfectNumber(n);
}