#include <iostream>

using namespace std;

int main() {
    for(int i = 1; i <= 10; i++) {
        cout << "Hello World" << endl;
    }

    for(int i = 1; i <= 20; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }
    }

// Perulangan for bersarang: Mencetak persegi 4x4 
    for(int baris = 1; baris <= 4; baris++) {
        for(int kolom = 1; kolom <= 4; kolom++) {
            cout << "* ";
        }
        cout << endl;
    }
// Perulangan for bersarang: Mencetak segitiga siku-siku 
    for(int i = 1; i <= 4; i++) {
        for(int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

// Variabel untuk deret bilangan dan perhitungan jumlah
    int n, num = 0, sum = 0;

    cout << "Masukkan suku ke : ";
    cin >> n;
    
// Perulangan for untuk menghitung deret bilangan (ganjil + 5) dan jumlahnya
    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0) {
            num = num;
        } else {
            num += 5;
        }
        sum += num;

        cout << num << " ";
    }
    cout << endl;
    
    cout << "Suku ke " << n << " adalah " << num << endl;
    cout << "Jumlah hingga suku ke " << n << " adalah " << sum << endl;
}