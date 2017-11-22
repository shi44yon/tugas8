#include <iostream>

using namespace std;

int cekKecil(int bil[i]) {
	int kecil = bil[0];
	for(int i = 0; i < 10; i++){
		if(bil[i] < kecil){
			kecil = bil[i];
		}
	}
	return kecil;
}

int cekBesar(int bil[i]) {
	int besar = bil[0];
	for(int i = 0; i < 10; i++){
		if(bil[i] > besar){
			besar = bil[i];
		}
	}
	return besar;
}

int main() {
	int bil[10];
	for(int i = 0; i < 10; i ++) {
		cin>>bil[i];
	}
	cout<<"Terkecil: "<<cekKecil<<endl;
	cout<<"Terbesar: "<<cekBesar<<endl;
}
