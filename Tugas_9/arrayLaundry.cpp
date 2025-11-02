#include <iostream>
using namespace std;

int main() {
    int batas;
    cout << "Masukkan jumlah pelanggan: ";
    cin >> batas;

    string data[batas][3];

    for (int i = 0; i < batas; i++) {
        cout << "\nData pelanggan ke-" << i + 1 << endl;
        cout << "Nama pelanggan : ";
        cin >> data[i][0];
        cout << "Jumlah (kg)    : ";
        cin >> data[i][1];
        cout << "Harga per kg   : ";
        cin >> data[i][2];
    }

    cout << "\n============= DATA LAUNDRY ==============\n";
    cout << "No  Nama        Jumlah(kg)   Harga/kg\n";
    cout << "================================================\n";

    for (int i = 0; i < batas; i++) {
        cout << i + 1 << "   "
             << data[i][0] << "  "
             << data[i][1] << "  "
             << data[i][2] << endl;
    }

    cout << "==========================\n";

    return 0;
}   
