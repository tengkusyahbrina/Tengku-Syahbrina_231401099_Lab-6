#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float bB, tB, bmi;
    cout << "Masukkan berat badan (kg): ";
    cin >> bB; 

    cout << "Masukkan tinggi badan (m): ";
    cin >> tB;

    bmi = bB / (tB * tB);

// Set presisi output untuk BMI menjadi dua desimal
    cout << fixed << setprecision(2);

    cout << "BMI Anda adalah: " << bmi << endl;

    if (bmi < 18.1) {
        cout << "Anda termasuk dalam kategori underweight" << endl;
    } 
    else if (bmi >= 18.1 && bmi < 23.1) {
        cout << "Anda termasuk dalam kategori normal" << endl;
    } 
    else if (bmi >= 23.1 && bmi < 28.1) {
        cout << "Anda termasuk dalam kategori overweight" << endl;
    } 
    else 
    {
        cout << "Anda termasuk dalam kategori obesitas" << endl;
    }
}