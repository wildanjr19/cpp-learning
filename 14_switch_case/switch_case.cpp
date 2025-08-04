#include <iostream>

using namespace std;

int main() {
    int a;

    cout << "masukkan angka = ";
    cin >> a;

    // switch
    switch (a)
    {
        case 1:
            cout << "Anda memasukkan angka 1" << endl;
            break;
        case 2:
            cout << "Anda memasukkan angka 2" << endl;
            break;
        case 3:
            cout << "Anda memasukkan angka 3" << endl;
            break;
        default:
            cout << "Angka tidak dikenali" << endl;
    }

    cout << "akhir" << endl;
    cin.get();
    return 0;
}

// tambahkan break di setiap case agar mengeksekui case tertentu saja