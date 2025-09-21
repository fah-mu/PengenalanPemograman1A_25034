//Fahmi Mubaroq
//2510631170034
//1A

#include <iostream>
#include <string>
using namespace std;

int main() {
    string barang1 = "sarimie";
    double harga1 = 5000;

    string barang2 = "teh pucuk";
    double harga2 = 4000;

    string barang3 = "aoka";
    double harga3 = 3000;

    int pilihan, jumlah;

    cout << "=== DAFTAR MENU ===" << endl;
    cout << "1. " << barang1 << " - Rp " << harga1 << endl;
    cout << "2. " << barang2 << " - Rp " << harga2 << endl;
    cout << "3. " << barang3 << " - Rp " << harga3 << endl;

    cout << "\nPilih barang (1-3): ";
    cin >> pilihan;

    cout << "Masukkan jumlah: ";
    cin >> jumlah;

    double total = 0, diskon = 0;

    if (pilihan == 1) {
        total = harga1 * jumlah;
        cout << "Anda membeli " << jumlah << " " << barang1 
             << " = Rp " << total << endl;
    }
    else if (pilihan == 2) {
        total = harga2 * jumlah;
        cout << "Anda membeli " << jumlah << " " << barang2 
             << " = Rp " << total << endl;
    }
    else if (pilihan == 3) {
        total = harga3 * jumlah;
        cout << "Anda membeli " << jumlah << " " << barang3 
             << " = Rp " << total << endl;
    }
    else {
        cout << "Pilihan tidak valid!" << endl;
        return 0;
    }

    if (jumlah > 5) {
        diskon = 0.1 * total; // 10% dari total
        cout << "Diskon 10%: Rp " << diskon << endl;
    }

    cout << "Total Bayar: Rp " << total - diskon << endl;

    return 0;
}
