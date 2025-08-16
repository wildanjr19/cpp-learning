#include <iostream>
#include <cstdlib>

// membuat angka random dadu
using namespace std;

int main() {

    char lanjut;

    while (true){
        cout << "Mau lempar dadu? (y/n)";
        cin >> lanjut;    
     if(lanjut == 'y') {
        cout << 1 + (rand() % 6) << endl;
    } else if(lanjut == 'n') {
        break;
    } else {
        cout << "Perintah yang anda masukkan salah\n";
    }
    }
    cin.get();
    return 0;
}