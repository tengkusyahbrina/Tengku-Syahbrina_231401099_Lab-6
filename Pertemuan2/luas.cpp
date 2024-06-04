#include<iostream>
#include<iomanip>
using namespace std; 

int main(){
    float panjang, lebar, luas; 

    cout<<"Masukkan panjang : ";
    cin>>panjang; 
    cout<<"Masukkan lebar : ";
    cin>>lebar; 

    luas = panjang * lebar;
    cout<<fixed<<setprecision(2);
    cout<<"Luas = "<<luas<<endl;
}