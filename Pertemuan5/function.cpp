#include <iostream>
#include <cmath>
#include "calc.h" // Memasukkan file header untuk fungsi-fungsi kalkulator
using namespace std;

//void tidak mengembalikan nilai apapun
void garis() {
    cout<< "====================="<<endl;
}

void bintang() {
    cout<< "*********************"<<endl;
}

void menu(){
garis();
    cout<<"Selamat datang di program kalkulator"<<endl;
    garis();
    cout<<"1.Tambah\n2.Kurang\n3.Kali\n4.Bagi\n5.Modulu\n6.Pangkat\n";
    garis();
}

int main() {
    char cont;

    do {
    system("CLS");

    int operasi,a ,b;
    float hasil;

    menu();
    cout<<"Masukkan operasi: ";
    cin>>operasi;

    cout<<"Masukkan angka pertama: ";
    cin>>a;

    cout<<"Masukkan angka kedua: ";
    cin>>b;

    switch(operasi) {
        case 1:
            hasil = tambah (a,b);
            break;
        case 2:
            hasil = kurang (a,b);
            break;
        case 3:
            hasil = kali (a,b);
            break;
        case 4:
            hasil = bagi (a,b);
            break;
        case 5:
            hasil = modulo (a,b);
            break;
        case 6:
            hasil = pangkat (a,b);
            break;
    }
    cout<<"Hasil: "<<hasil<<endl;


    cout<<"Apakah anda ingin melanjutkan? [Y/N]: ";
    cin>>cont;

    } while(toupper(cont) == 'Y' ); //Fungsi ini mengubah karakter yang disimpan dalam cont menjadi huruf kapital.

    bintang();
    cout<<"Terimakasih telah menggunakan Kalkulator Kami"<<endl;

}