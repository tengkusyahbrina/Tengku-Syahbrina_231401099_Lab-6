#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa{ // struct harus diawali huruf kapital
    string nama, nim;
    float nilai;
};

// typedef struct{        // ini cara ke-2 buat struct
//     string nama, nim;
// } siswa;

int main(){
    system("cls");

    Mahasiswa mhs;
    vector<Mahasiswa> mahasiswa;
    int n;

    cout<<"Masukkan jumlah mahasiswa: ";
    cin>>n;

    for (int i= 0; i<n;i++) {
    cout<<"Mahasiswa "<<i+1<<endl;
    cin.get();

    cout<<"Masukkan nama: ";
    getline(cin, mhs.nama);

    cout<<"Masukkann nim: ";
    cin>>mhs.nim;

    cout<<"Masukkan nilai: ";
    cin>>mhs.nilai;

    mahasiswa.push_back(mhs);
    }

    
    for (int i=0; i<n; i++){
        cout<< mahasiswa[i].nama <<" memiliki NIM "<<mahasiswa[i].nim<<" dan nilai "<<mahasiswa[i].nilai<<endl;
    }
}
