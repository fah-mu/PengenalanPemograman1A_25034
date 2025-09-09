/*Nama:Fahmi Mubaroq
NPM: 2510631170034*/

#include <iostream>
using namespace std;


int main() {
string namaPelanggan; 
int beratPakaian; 
double tarif = 7000.0;
double totalHarga;

cout << "Nama : ";
getline(cin, namaPelanggan);

cout << "Berat Pakaian (kg): ";
cin >> beratPakaian;

cout << "1 kg pakaian anda akan dikenakan 7.000 rupiah" << endl;

totalHarga = tarif * beratPakaian;

cout << "Halo, " << namaPelanggan << " Total harga yang harus dibayar menjadi " << totalHarga ;

return 0;
}