#include <iostream>
#include<array>
using namespace std;

int main()
{
    system("CLS");

    // string nama[5]= {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    // accessing elements in array
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // for(int i=0; i<5; i++){
    //     cout<<nama[i]<<endl;
    // }

    // // Mutidimensional Array
    // int matriks[2][2] = {{1,3},{2,4}};
    // cout<<matriks[0][0];
    // cout<<matriks[0][1];
    // cout<<matriks[1][0];
    // cout<<matriks[1][1];

    // for (int i=0; i<2;i++){
    //     for (int j=0;j<2;j++) {
    //         cout<<matriks[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //string (array of character)
    // string nama = "Jonrio";
    // cout<<nama[0]<<endl;
    // cout<<nama[1]<<endl;
    // cout<<nama[2]<<endl;
    // cout<<nama[3]<<endl;
    // cout<<nama[4]<<endl;

    // for(int i=0; i<3; i++){
    //     cout<<nama[i]<<" ";
    // }

    // fori(int i=0; i < nama.length(); i++){
    //     cout<< nama[i] << endl;
    // }

    //Example 1
    // int n;
    
    // cout<< "Masukkan banyak mahasiswa: ";
    // cin>>n;

    // float nilai[n];
    // for(int i=0; i<n; i++){
    //     cout<<" Masukkan nilai mahasiswa ke "<<i+1<<":";
    //     cin>>nilai[i];
    // }
    // for(int i=0; i<n; i++){
    //     cout<<" Nilai mahasiswa ke "<<i +1<<" adalah "<<nilai[i]<<endl;
    // }

    //Example 2
    // string nama_karyawan[] = {"Andi","Yusuf","Budi","Yanto","Santi","Dodi"};

    // sizeof() -> untuk mengecek ukuran suatu objek
    // n x sizeof(string) = sizeof(nama_karyawan)
    // n = sizeof(nama_karyawan) / sizeof(string)
    // cout<<sizeof(string)<<endl;
    // cout<<sizeof(nama_karyawan)<<endl;
    // cout<<sizeof(nama_karyawan) / sizeof(string) <<endl;
    
    // for(int i =0; i< sizeof(nama_karyawan) / sizeof(string); i++){
    //     cout<<nama_karyawan[i]<< endl;
    // }
    
    //Example 3
    // int matriks1[2][2];
    // int matriks2[2][2];
    // int hasil[2][2];

    // cout<<"Matriks 1"<<endl;
    // for(int i =0; i<2;i++){
    //     for(int j=0; j<2;j++){
    //         cout<<"Masukkan elemen baris "<<i+1<<" kolom"<<j+1<<":";
    //         cin>> matriks1[i][j];
    //     }
    // }

    // cout<<"Matriks 2"<<endl;
    // for(int i =0; i<2;i++){
    //     for(int j=0; j<2;j++){
    //         cout<<"Masukkan elemen baris "<<i+1<<" kolom"<<j+1<<":";
    //         cin>> matriks2[i][j];
    //     }
    // }

    // cout<<"Hasil Penjumlahan "<<endl;
    // for(int i=0; i<2;i++){
    //     for(int j=0;j<2;j++){
    //         hasil[i][j] = matriks1[i][j] + matriks2[i][j];
    //         cout<<hasil[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    //array library
    array<string,5> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

      //for each loop;
    for(string mhs:nama){
        cout<<mhs<<endl;
    }

    cout<< nama.size()<<endl;
}   