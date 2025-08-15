#include <iostream>

using namespace std;

int main() {

    int n; // panjangnya
    
    cout << "Masukkan panjang pola : ";
    cin >> n;

    // pola 3
    cout << "Pola 3\n";

    for(int i = 1; i <= n; i++){    // looping baris
        for(int j = 1; j < i; j++){ // looping isi
            cout << ' ';
        }
        for(int k = n; k >= i; k--){
            cout << '*';
        }
        cout << endl;
    }

     // pola 4
    cout << "Pola 4\n";

    for(int i = 1; i <= n; i++){    // looping baris
        for(int j = n; j > i; j--){ // looping isi
            cout << ' ';
        }
        for(int k = 1; k <= i; k++){
            cout << '*';
        }
        cout << endl;
    }

    cin.get();
    return 0;
}