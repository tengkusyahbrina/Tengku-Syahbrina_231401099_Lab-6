#include<iostream>
#include<vector> //vektor untuk menyimpan kumpulan elemen yang terurut
using namespace std;

int main(){
    system("cls");

    //vector declaration and initial
    vector<string> nama = {"Andi", "Budi", "Santi", "Wanto", "Denis"};

    // accessing element in vector
    // for (int i=0; i < nama.size(); i++){
    //     cout<< nama[i]<<endl;
    // }

    //for each loop;
    for(string mhs:nama){
        cout<<mhs<<endl;
    }

    //adding data to vector
    // nama.push_back("Wawan");

    //deleting data from vector
    // nama.pop_back(); //Menghapus data paling akhir

    // nama.erase(nama.begin()); //hapus data depan
    // nama.erase(nama.begin()+2); //hapus data di posisi tertentu

    // for (int i=0; i < nama.size(); i++){
    //     cout<< nama[i]<<endl;
    // }

}