#include<cmath> // Header untuk fungsi matematika seperti pow
int tambah( int a, int b) {
    return a+b;
}

int kurang( int a, int b) {
    return a-b;
}

int kali( int a, int b) {
    return a*b;
}

// Fungsi membagi dua bilangan integer dan mengembalikan hasil dalam float
float bagi( int a, int b) {
    return static_cast<float>(a) / static_cast<float>(b); //static_cast<float> untuk memastikan hasil pembagian adalah float.

}

int modulo( int a, int b) {
    return a%b;
}

int pangkat( int a, int b) {
    return pow(a, b); //pow untuk operasi pangkat.
}