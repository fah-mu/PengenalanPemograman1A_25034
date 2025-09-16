/*Nama:Fahmi Mubaroq
NPM: 2510631170034*/

#include <iostream>
#include <string>
using namespace std;


int main() {
string namaObat; 
int stok; 
double harga;
long long totalHarga;

cout << "=== Input Data Apotek ===" << endl;
    cout << "Nama Obat  : ";
    getline(cin,namaObat);
    cout << "Stok       : ";
    cin >> stok;
    cout << "Harga      : ";
    cin >> harga;

    totalHarga = stok*harga;

    cout << "\n=== Data Apotek ===" << endl;
    cout << "Nama Obat : " << namaObat 
         << ", Stok: " << stok 
         << ", Harga: Rp " <<  harga << endl;
    cout << "total harga obat jenis " << namaObat << " adalah : Rp. " << totalHarga;

return 0;
}