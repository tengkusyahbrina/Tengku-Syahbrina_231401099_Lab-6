#include <iostream>

using namespace std;

int main() {
    a: 
        cout << "Hello World" << endl;
        goto d;
    b:
        cout << "Universitas Sumatera Utara" << endl;
        return 0;
    c:
        cout << "Fasilkom-TI" << endl;
        goto b;
    d:
        cout << "Ilmu Komputer" << endl;
        goto c;

    int angka = 1;
    loop:
        cout << angka << " ";
        angka++;
    // Kondisi perulangan yang tidak valid (selalu salah karena angka belum diinisialisasi)
    if(angka <= 10) {
        goto loop;
    }
}