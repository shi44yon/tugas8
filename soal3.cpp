#include <iostream>

using namespace std;

int main() {
	int n, fibo[n];
	int awal = 1;
	int akhir, rata = 0;
	cout<<"Enter how many fibonacci numbers you want: ";
	cin>>n;
	cout<<"Your fibonacci numbers are: "<<endl;
	for(int i = 0; i < n; i++) {
		fibo[i] = awal;
		awal += akhir;
		akhir = fibo[i];
		cout<<fibo[i]<<endl;
	}
	cout<<"Their average is: "<<endl;
	for(int j = 0; j < n; j++) {
		rata += fibo[j];
	}
	cout<<rata/n;
}