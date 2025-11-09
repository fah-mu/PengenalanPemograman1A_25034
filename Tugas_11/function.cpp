#include <iostream>
using namespace std;

int luasSegiEmpat(int panjang, int lebar) {
    return panjang * lebar;
}

int luasSegiTiga(int alas, int tinggi) {
    return 0.5 * alas * tinggi;
}

int luasLingkaran(int r) {
    return 3.14 * r * r;
}

int main() {
    int pilihan;
    cout << "=== PROGRAM HITUNG LUAS BANGUN ===\n";
    cout << "1. Luas Segi Empat\n";
    cout << "2. Luas Segi Tiga\n";
    cout << "3. Luas Lingkaran\n";
    cout << "Pilih menu (1-3): ";
    cin >> pilihan;

    if (pilihan == 1) {
        float p, l;
        cout << "\nMasukkan panjang : ";
        cin >> p;
        cout << "Masukkan lebar    : ";
        cin >> l;
        cout << "Luas Segi Empat = " << luasSegiEmpat(p, l) << endl;
    }
    else if (pilihan == 2) {
        float a, t;
        cout << "\nMasukkan alas   : ";
        cin >> a;
        cout << "Masukkan tinggi : ";
        cin >> t;
        cout << "Luas Segi Tiga = " << luasSegiTiga(a, t) << endl;
    }
    else if (pilihan == 3) {
        float r;
        cout << "\nMasukkan jari-jari : ";
        cin >> r;
        cout << "Luas Lingkaran = " << luasLingkaran(r) << endl;
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
