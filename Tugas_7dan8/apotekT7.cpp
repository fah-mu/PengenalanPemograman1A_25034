/*Fahmi Mubaroq
2510631170034
1A Informatika*/

#include <iostream>
using namespace std;

int main() {
    int stok = 0, pilihan, jumlah;

    do {
        cout << "\n=== Sistem Apotek ===\n";
        cout << "1. Tambah stok obat\n";
        cout << "2. Kurangi stok obat\n";
        cout << "3. Lihat total stok obat\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Masukkan jumlah obat yang ditambah: ";
                cin >> jumlah;
                stok += jumlah;
                cout << "Stok obat bertambah!\n";
                break;
            case 2:
                cout << "Masukkan jumlah obat yang dikurangi: ";
                cin >> jumlah;
                if (jumlah <= stok) {
                    stok -= jumlah;
                    cout << "Stok obat berkurang!\n";
                } else {
                    cout << "Stok tidak mencukupi!\n";
                }
                break;
            case 3:
                cout << "Total stok obat sekarang: " << stok << endl;
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