#include <iostream>

using namespace std;

int main() {
    int angka = 1;
    // Perulangan do-while pertama: Mencetak angka dari 1 hingga 10
    do {
        cout << angka << " ";
        angka++;
    } while(angka <= 10);


    // Perulangan do-while kedua: Mencetak pesan "Kondisi tidak terpenuhi"
    angka = 1;
    do {
        cout << angka << " ";
        angka++;
    } while(angka > 10);
}