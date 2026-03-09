#include <iostream>
#include <string>
using namespace std;

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