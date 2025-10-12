#include <iostream>
using namespace std;

int main() {
    int stokMie = 0, pilihan, jumlah;

    do {
        cout << "\n=== Sistem Stok Warung ===\n";
        cout << "1. Tambah stok mie instan\n";
        cout << "2. Kurangi stok mie instan\n";
        cout << "3. Lihat stok mie instan\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Masukkan jumlah mie yang ditambah: ";
                cin >> jumlah;
                stokMie += jumlah;
                cout << "Stok mie bertambah!\n";
                break;
            case 2:
                cout << "Masukkan jumlah mie yang dikurangi: ";
                cin >> jumlah;
                if (jumlah <= stokMie) {
                    stokMie -= jumlah;
                    cout << "Stok mie berkurang!\n";
                } else {
                    cout << "Stok tidak mencukupi!\n";
                }
                break;
            case 3:
                cout << "Total stok mie instan sekarang: " << stokMie << endl;
                break;
            case 4:
                cout << "Keluar dari program.\n";
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    } while (pilihan != 4);

    return 0;
}