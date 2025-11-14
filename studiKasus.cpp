/*
Fahmi Mubaroq 2510631170034
Rizky Yoga Salasa 2510631170049
Rika Alfiyani 2510631170019
Fabian Ananda Taufik 2510631170062
Raffa Hafizh Hauzaan 2510631170004
*/


#include <iostream>
using namespace std;

// Struct untuk barang
struct Barang
{
    string nama;
    int harga;
};

// Fungsi menghitung total harga
int hitungTotal(int harga, int jumlah)
{
    return harga * jumlah;
}

// Fungsi menghitung diskon
int hitungDiskon(int totalBelanja)
{
    if (totalBelanja >= 50000)
    {
        return totalBelanja * 0.1; // Diskon 10%
    }
    else if (totalBelanja >= 30000)
    {
        return totalBelanja * 0.05; // Diskon 5%
    }
    else
    {
        return 0; // Tidak ada diskon
    }
}

int main()
{
    Barang daftar[6] = {{"Ayam Geprek", 8000}, {"Teh Manis", 4000}, {"Nasi", 3000}, {"Es Kiyut", 5000}, {"Mie Ayam", 10000}, {"Bakso", 12000}};
    int totalKeseluruhan = 0;
    int totalBelanja = 0;
    int diskon = 0;
    char lanjut;

    cout << "\n==================== SELAMAT DATANG =========================\n" << endl;

    do
    {
        // Tampilkan menu
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << ". " << daftar[i].nama << " - Rp." << daftar[i].harga << endl;
        }

        int pilih, jumlah;
        cout << "Pilih menu (1-6): ";
        cin >> pilih;
        cout << "Jumlah: ";
        cin >> jumlah;

        int total = hitungTotal(daftar[pilih - 1].harga, jumlah);
        totalBelanja += total;

        cout << "Total " << daftar[pilih - 1].nama << " = Rp." << total << endl;

        cout << "Pesan lagi? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    // Hitung diskon pake fungsi
    diskon = hitungDiskon(totalBelanja);
    totalKeseluruhan = totalBelanja - diskon;

    cout << "\n======================================\n";
    cout << "Total Belanja : Rp." << totalBelanja << endl;
    cout << "Diskon : Rp." << diskon << endl;
    cout << "\nTotal keseluruhan : Rp." << totalKeseluruhan << endl;

    // Logika pesan berdasarkan total harga yang sudah dibeli
    if (totalKeseluruhan >= 50000)
    {
        cout << "Terimakasih pelanggan yang terhormat, silakan datang kembali" << endl;
    }
    else if (totalKeseluruhan >= 20000)
    {
        cout << "Terimakasih banyak bang!" << endl;
    }
    else
    {
        cout << "Makasih" << endl;
    }

    return 0;
}