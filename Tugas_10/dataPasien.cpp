/*FAHMI MUBAROQ
2510631170034 */

#include <iostream>
using namespace std;

struct Pasien {
    string nama;
    string jenisPenyakit;
    string alamat;
    int biaya;
};

int main() {
    int n;
    cout << "Masukkan jumlah pasien: ";
    cin >> n;
     cin.ignore();

    Pasien psn[n];
    int totalBiaya = 0;

    cout << "---------------- Data Pasien -----------------";
    for (int i = 0; i < n; i++) {
        cout << "\nPasien ke-" << i + 1 << endl;
        cout << "Nama pasien        : ";
        getline(cin, psn[i].nama);
        cout << "Jenis penyakit     : ";
        getline(cin, psn[i].jenisPenyakit);
        cout << "Alamat pasien      : ";
        getline(cin, psn[i].alamat);
        cout << "Biaya perawatan    : ";
        cin >> psn[i].biaya;
         cin.ignore();
        totalBiaya += psn[i].biaya;
    }

    cout << "-------------------- Daftar Pasien dan Biaya -------------------";
    for (int i = 0; i < n; i++) {
        cout << "\nPasien ke-" << i + 1 << endl;
        cout << "Nama          : " << psn[i].nama << endl;
        cout << "Penyakit      : " << psn[i].jenisPenyakit << endl;
        cout << "Alamat        : " << psn[i].alamat << endl;
        cout << "Biaya         : Rp " << psn[i].biaya << endl;
    }

    cout << "Total biaya seluruh pasien: Rp " << totalBiaya << endl;

    return 0;
}
