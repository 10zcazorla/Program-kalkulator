#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    float a,b,hasil;
    char aritmatika;

    cout << "Selamat datang di program kalkulator \n \n";

    // memasukkan input dari user
    cout << "Masukkan Nilai Pertama: ";
    cin >> a;
    cout << "Pilih operator :\n +\n -\n *\n /\n masukan operator : ";
    cin >> aritmatika;
    cout << "Masukkan Nialai kedua: ";
    cin >> b;

    cout << "\nHasil perhitungan: ";
    cout << a << aritmatika << b;

    if (aritmatika == '+') {
        hasil = a + b;
        } else if (aritmatika == '-') {
            hasil = a - b;
        } else if (aritmatika == '*') {
            hasil = a * b;
        } else if (aritmatika == '/') {
        hasil = a / b;
        } else {
            cout << "operator anda salah" << endl;
            }
        cout << "=" << hasil << endl;


    getch();
    return 0;
}
