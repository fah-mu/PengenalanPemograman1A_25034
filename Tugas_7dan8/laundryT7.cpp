#include <iostream>
using namespace std;

int main() {
    float totalCucian = 0;
    int pilihan;
    float kg;

    do {
        cout << "\n=== Sistem Laundry ===\n";
        cout << "1. Tambah cucian masuk (kg)\n";
        cout << "2. Kurangi cucian (selesai dicuci)\n";
        cout << "3. Lihat total cucian yang belum selesai\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch(pilihan) {
            case 1:
                cout << "Masukkan berat cucian masuk (kg): ";
                cin >> kg;
                totalCucian += kg;
                cout << "Cucian masuk ditambahkan!\n";
                break;
            case 2:
                cout << "Masukkan berat cucian yang selesai (kg): ";
                cin >> kg;
                if (kg <= totalCucian) {
                    totalCucian -= kg;
                    cout << "Cucian selesai dicuci!\n";
                } else {
                    cout << "Jumlah cucian tidak mencukupi!\n";
                }
                break;
            case 3:
                cout << "Total cucian yang belum selesai: " << totalCucian << " kg\n";
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
