#include<iostream>
#include<vector>
using namespace std; 
//class mirip seperti struct, tapi dengan class dapat menambahkan function
class Mahasiswa{
    //Access Modifier 
    private: 
        string Nama, Nim; 
        float Nilai;

    //Access Modifier
    public: 
        //Constructor Method = fungsi yang dipanggil pertama kali
        Mahasiswa(string nama, string nim, float nilai){
            this->Nama = nama; 
            this->Nim = nim; 
            this->Nilai = nilai;
        } 

        //Getter Method = Method untuk mendapatkan nilai yang ada di private
        string getNama(){
            return this->Nama;
        }

        string getNim(){
            return this->Nim;
        }

        float getNilai(){
            return this->Nilai;
        }
        void display(){
            cout<<"Nama : "<<this->getNama()<<endl; 
            cout<<"NIM : "<<this->Nim<<endl; 
            cout<<"Nilai : "<<this->Nilai<<endl; 
        }
};

int main(){
//     Mahasiswa mhs("Andi", "231401001", 87.2); //Instansiasi
//     mhs.display();

    // cout<<mhs.getNama()<<endl;
    // cout<<mhs.getNim()<<endl;
    // cout<<mhs.getNilai()<<endl;

    vector<Mahasiswa> mahasiswa; 
    int n; 
    string nama, nim; 
    float nilai;
    cout<<"Masukkan jumlah mahasiswa: "; 
        cin>>n; 
    
    for(int i=0; i<n; i++){
        cout<<"Mahasiswa ke-"<<i+1<<endl; 

        cin.get(); 

        cout<<"Masukkan nama : "; 
            getline(cin, nama); 
        
        cout<<"Masukkan nim : "; 
            cin>>nim; 
        
        cout<<"Masukkan nilai : "; 
            cin>>nilai; 
        
        Mahasiswa mhs(nama, nim, nilai); 
        mahasiswa.push_back(mhs);
    }

    for(int i=0; i<n; i++){
        cout<<"Mahasiswa ke-"<<i+1<<endl;
        mahasiswa[i].display();
    }
    return 0;
}