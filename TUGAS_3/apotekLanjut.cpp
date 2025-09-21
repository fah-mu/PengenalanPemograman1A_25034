#include <iostream>
#include <string>
using namespace std;

int main() {
    string namaObat;
    int stok;
    double harga;
    long long totalHarga;
    long long diskon;

    cout << "=== Input Data Apotek ===" << endl;
    cout << "Nama Obat : ";
    getline(cin, namaObat);
    cout << "Stok      : ";
    cin >> stok;
    cout << "Harga     : ";
    cin >> harga;

    totalHarga = stok * harga;

    diskon = (stok > 10) ? 0.1 * totalHarga : 0;

    cout << "\n=== Data Apotek ===" << endl;
    cout << "Nama Obat : " << namaObat
         << ", Stok: " << stok
         << ", Harga: Rp " << harga << endl;

    cout << "Total harga obat jenis " << namaObat 
         << " adalah Rp. " << totalHarga << endl;

    cout << "Diskon     : Rp " << diskon << endl;
    cout << "Harga Akhir: Rp " << totalHarga - diskon << endl;

    return 0;
}
