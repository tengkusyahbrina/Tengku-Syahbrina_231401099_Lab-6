#include<iostream>
#include "operasi.h"
#include "preprocessor.h"

uns;

void sayhello(){    //function tanpa nilai apa pun untuk dikembalikan
    o<<"Hello world"<<n;
}

void bintang(){
    o<<"*************"<<n;
}


int main(){
    bintang();
    o<<tambah(2, 3)<<n; //menggunakan kode baru yang telah dibuat di header processor.h
    o<<kurang(2, 3)<<n;
    o<<kali(2, 3)<<n;
    o<<bagi(2, 3)<<n;
    sayhello();
    o<<PI<<n;
    return 0;
}