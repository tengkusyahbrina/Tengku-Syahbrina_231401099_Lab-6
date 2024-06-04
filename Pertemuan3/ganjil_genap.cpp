#include <iostream>

using namespace std;

int main() {
    int angka;
    string tipe;

    cout << "Masukkan angka: ";
    cin >> angka;

    // Gunakan operator ternary untuk menentukan jenis bilangan (genap/ganjil)
    // `angka % 2 == 0` mengecek apakah `angka` habis dibagi 2 (sisa bagi 0)
    tipe = (angka % 2 == 0) ? "Genap" : "Ganjil";
    cout << tipe << endl;

    return 0;
}