/*Nama:Fahmi Mubaroq
NPM: 2510631170034*/

#include <iostream>
using namespace std;


int main() {
string namaPelanggan; 
int beratPakaian; 
double tarif = 7000;
double totalHarga;
double diskon;

cout << "Nama : ";
getline(cin, namaPelanggan);

cout << "Berat Pakaian (kg): ";
cin >> beratPakaian;

cout << "1 kg pakaian anda akan dikenakan 7.000 rupiah" << endl;

totalHarga = tarif * beratPakaian;

diskon = (beratPakaian > 5) ? 0.1 * totalHarga : 0;

cout << "diskon : " << diskon << endl;

cout << "Halo, " << namaPelanggan << " Total harga yang harus dibayar menjadi " << totalHarga - diskon ;

// test

return 0;
}