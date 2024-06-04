#include<iostream>
#include<conio.h>
using namespace std; 

int main(){
    system("cls");
    float r,t,v;
    const float phi = 3.14;

    cout<<"Masukkan r : ";
    cin>>r;
    cout<<"Masukkan t : ";
    cin>>t; 

    v = phi*r*r*t;

    cout<<"Volume = "<<v<<endl;
    system("pause");
}