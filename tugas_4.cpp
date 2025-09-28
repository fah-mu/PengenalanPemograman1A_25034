/*Nama:Fahmi Mubaroq
NPM: 2510631170034
1A Informatika*/

#include <iostream>
using namespace std;


int main() {
string namaPelanggan; 
int beratPakaian, pakaian, kapasitas = 15; 
double tarif = 7000;
double totalHarga;
double diskon;

cout << "Nama : ";
getline(cin, namaPelanggan);

cout << "Berat Pakaian (kg): ";
cin >> beratPakaian;

cout << "Masukkan jumlah pakaian per kilo: ";
    cin >> pakaian;

cout << "\n1 kg pakaian anda akan dikenakan 7.000 rupiah " << endl;

totalHarga = tarif * beratPakaian;

diskon = (beratPakaian > 5) ? 0.1 * totalHarga : 0;

cout << "diskon : " << diskon << endl;

cout << "Halo, " << namaPelanggan << " Total harga yang harus dibayar menjadi " << totalHarga - diskon ;

if (pakaian > kapasitas) {
        cout << ".Jumlah pakaian melebihi kapasitas mesin cuci. Maaf karena kami memakai satu mesin mungkin agak lama(" 
        << kapasitas << ")." << endl;
    } else {
        cout << "\n.Maaf karena kami memakai satu mesin. Jumlah pakaian masih muat dalam mesin cuci mohon ditunggu. " << endl;
    }


return 0;
}