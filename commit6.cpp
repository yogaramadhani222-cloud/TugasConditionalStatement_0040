#include <iostream>
using namespace std;

// Prosedur untuk memasukkan data
void InputData(float &berat, float &tinggi)
{
    cout << "Masukkan berat badan (kg) = ";
    cin >> berat;
    cout << "Masukkan tinggi badan (m) = ";
    cin >> tinggi;
}

// Fungsi menghitung BMI
float HitungBMI(float berat, float tinggi)
{
    return berat / (tinggi * tinggi);
}

// Fungsi menentukan kondisi berat badan
string KondisiBMI(float bmi)
{
    if (bmi < 18.5)
        return "Berat Badan Kurang";
    else if (bmi < 25)
        return "Berat Badan Normal";
    else if (bmi < 30)
        return "Berat Badan Kelebihan";
    else
        return "Obesitas";
}

int main()
{
    float berat, tinggi, bmi;

    cout << "--- Selamat Datang Mahasiswa Kelas A 2025 ---" << endl;

    // Memanggil prosedur input
    InputData(berat, tinggi);

    // Menghitung BMI
    bmi = HitungBMI(berat, tinggi);

    cout << "--- Hasil ---" << endl;

    // Menampilkan hasil
    cout << "BMI Anda = " << bmi << endl;
    cout << "Status = " << KondisiBMI(bmi) << endl;
}