#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "masukkan angka : ";
    cin >> a;
    
    // if else statement
    if ( a < 3) {
        cout << a;
        cout << " kurang dari 3" << endl;
    } else {
        cout << "a lebih dari atau sama dengan 3" << endl;
    }
    cout << "Selesai" << endl;

    cin.get();
    return 0;
}