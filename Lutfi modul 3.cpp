#include <iostream>
using namespace std;

int main() 
{
    double HargaBarang, DiskonBarang, potonganHarga, totalBayar;

    cout << "Masukkan :" << endl;
    cout << "Harga Barang (Rp) = ";
    cin >> HargaBarang;

    cout << "Diskon barang (%) = ";
    cin >> DiskonBarang;

    potonganHarga = HargaBarang * DiskonBarang / 100;
    totalBayar = HargaBarang - potonganHarga;

    cout << "\nHasil :" << endl;
    cout << "Jumlah diskon          = Rp" << potonganHarga << endl;
    cout << "Harga setelah diskon   = Rp" << totalBayar << endl;

    return 0;
}