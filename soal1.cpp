#include <iostream>

using namespace std;

int main() {
	int bil[10], besar, kecil;
	for(int i = 0; i < 10; i ++) {
		cin>>bil[i];
	}
	for(int i = 0; i < 10; i++) {
		if(i == 0){
			besar = bil[0];
			kecil = bil[0];
		}
		if(bil[i] > besar) {
			besar = bil[i];
		}else if(bil[i] < kecil) {
			kecil = bil[i];
		}
	}
	cout<<"Terbesar: "<<besar<<endl;
	cout<<"Terkecil: "<<kecil<<endl;
}
