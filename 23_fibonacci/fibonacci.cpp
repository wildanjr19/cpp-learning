#include <iostream>

using namespace std;

int main() {
    // f(n) = f(n-1) + f(n-2)
    
    int n;
    int fn;
    int fn1;
    int fn2;
    
    cout << "Program Deret Fibonacci\n";
    cout << "Masukkan nilai n : ";
    cin >> n;


    // inisalisasi variabel dummy
    fn1 = 1;
    fn2 = 0;
    // tampilkan nilai awal
    fn = fn1 + fn2;
    cout << fn << endl;

    for (int  i = 1; i < n; i++) {
        fn = fn1 + fn2;
        
        // update nilai. mulai dari fn2, fn1
        fn2 = fn1;
        fn1 = fn;

        cout << fn << endl;
    }

    cin.get();
    return 0;
}