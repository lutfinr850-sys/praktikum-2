#include <iostream>

using namespace std;

int main(){
	double nilai;

	cout << "=== Program Nilai Mutu ===" << endl;
	cout << "Masukan Nilai Angka : ";
	cin >> nilai;
	cout << "\nHasil :" << endl;
	
    if (nilai >= 89) {
        cout << "Nilai mutu : A" << endl;
        cout << "Keterangan : Naik Kelas" << endl;
    }
    else if (nilai >= 80 && nilai <= 89) {
        cout << "Nilai mutu : B" << endl;
        cout << "Keterangan : Naik Kelas" << endl;
    }
    else if (nilai >= 70 && nilai <= 80) {
        cout << "Nilai mutu : C" << endl;
        cout << "Keterangan : Naik Kelas" << endl;
    }
    else if (nilai >= 60 && nilai <= 70) {
        cout << "Nilai mutu : D" << endl;
        cout << "Keterangan : Tidak Naik Kelas" << endl;
    }
    else if (nilai >= 0 && nilai <= 60) {
        cout << "Nilai mutu : E" << endl;
        cout << "Tidak Naik Kelas" << endl;
    }
	return 0;
}