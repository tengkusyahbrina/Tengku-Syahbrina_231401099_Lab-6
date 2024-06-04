#include <iostream>

using namespace std;

int main() {
    // int angka = 1;
    // while (angka <= 10) { //
    //     cout << angka << " ";
    //     angka++;
    //}

    int angka = 1;
    // Perulangan while untuk mencetak angka genap dari 1 sampai 20
    while (angka <= 20) {
        if (angka % 2 == 0) { // Memeriksa apakah i adalah angka gena
            cout << angka << " ";
        }
        angka++;
    }

}