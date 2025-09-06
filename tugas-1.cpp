#include <iostream>
using namespace std;

/*Nama:Fahmi Mubaroq
NPM: 2510631170034*/

int main() {
string nama;
int usia;

cout << "Masukkan nama Anda: ";
getline(cin, nama); // supaya nama bisa spasi cth: Fahmi Mubaroq
cout << "Masukkan usia Anda: ";
cin >> usia;
cout << "Halo " << nama << ", usia Anda ";
cout << usia << " tahun." << endl;
return 0;
}