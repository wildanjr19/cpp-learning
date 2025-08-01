#include <iostream>

// untuk efisiensi menggunakan std
using namespace std; 

int main() {
    int a;
    a = 10;
    cout << a << endl;

    int b;
    cout << "Masukkan nilai : ";
    cin >> b; // meminta input
    cout << "Nilai yang anda masukkan adalah : ";
    cout << b << endl;

    cin.ignore();
    cin.get();
    return 0;
}
