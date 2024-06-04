#include<iostream>
using namespace std; 

int main(){
    float r,t,v,l,s;
    const float phi = 3.14;
    cout<<"Masukkan r : ";
    cin>>r;
    cout<<"Masukkan t : ";
    cin>>t;
    cout<<"Masukkan s : ";
    cin>>s;
    v = phi * r * r * t/3;
    l = phi*r*(s + r);
    cout<<"Volume kerucut : "<<v<<endl;
    cout<<"Luas permukaan : "<<l<<endl;
}