#include <iostream>

using namespace std;

void isi(int matrix[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin>>matrix[i][j];
		}
	}
}

void hitung(int matrix1[3][3], int matrix2[3][3]) {
    int hasil[3][3];
    int temp;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			temp = 0;
			for (int k = 0; k < 3; k++) {
				temp += matrix1[i][k] * matrix2[k][j];
				}
			hasil[i][j] = temp;
		}
	}

	cout << "Hasil Akhir = " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << hasil[i][j] << " ";
		}

		cout << endl;
	}
}


int main() {
	int matrix1[3][3];
	int matrix2[3][3];
	
	cout<<"Matrix 1st: "<<endl;
	isi(matrix1);
	cout<<"Matrix 2nd: "<<endl;
	isi(matrix2);
	
	hitung(matrix1, matrix2);
}