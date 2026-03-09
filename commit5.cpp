#include <iostream>
using namespace std;

// Fungsi menghitung BMI
float HitungBMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}

int main()
{
    float berat, tinggi, bmi;

    cout << "Masukkan berat badan (kg): ";
    cin >> berat;

    cout << "Masukkan tinggi badan (m): ";
    cin >> tinggi;
}