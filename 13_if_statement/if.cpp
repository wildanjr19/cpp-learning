#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "masukkan angka : ";
    cin >> a;
    
    // if statement
    if ( a < 3) {
        cout << a;
        cout << " kurang dari 3" << endl;
    }
    cout << "Selesai" << endl;

    cin.get();
    return 0;
}