#include <iostream>

using namespace std;

int main() {
    float a, b, hasil;
    char operasi;

    // input dari user
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan operasi yang diinginkan (+, -, *, /) : ";
    cin >> operasi;
    cout << "Masukkan angka kedua : ";
    cin >> b;

    // siwtch case untuk memilih operasi yang diinginkan
    switch (operasi) {
        case '+':
            hasil = a + b;
            break;
        case '-':
            hasil = a - b;
            break;
        case '*':
            hasil = a * b;
            break;
        case '/':
            hasil = a / b;
            break;
        default:
            cout << "Operasi yang dimasukkan tidak ada" << endl;
    }

    // tampilkan hasil akhir
    cout << "Hasil : " << hasil << endl;

    cin.get();
    return 0;
}