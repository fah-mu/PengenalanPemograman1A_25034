//Fahmi Mubaroq 
//2510631170034
//1A Informatika



#include <iostream>
#include <string> 

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

    cout << "Masukkan jumlah pakaian per Kg: "; 
    cin >> pakaian;

    
    cout << "Jenis Layanan: ";
    if (pakaian <= 10) {
        cout << "Regular" << endl;
    } else if (pakaian > 10 && pakaian <= 20) {
        cout << "Express" << endl;
    } else { 
        cout << "Kapasitas mesin penuh, pisahkan cucian!" << endl;
    }
    

    cout << "\n1 kg pakaian anda akan dikenakan 7.000 rupiah " << endl;

    totalHarga = tarif * beratPakaian;

    diskon = (beratPakaian > 5) ? 0.1 * totalHarga : 0;

    cout << "Diskon : " << diskon << endl;

    cout << "Halo, " << namaPelanggan << " Total harga yang harus dibayar menjadi " << totalHarga - diskon;

    if (pakaian > kapasitas) {
        cout << ". Maaf karena kami memakai satu mesin mungkin agak lama. Jumlah pakaian melebihi kapasitas mesin cuci ("
             << kapasitas << ")." << endl;
    } else {
        cout << ". Jumlah pakaian masih muat dalam mesin cuci." << endl;
    }

    return 0; 
}