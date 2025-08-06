#include <iostream>

using namespace std;

int main() {
    int a = 5;

    do { 
        // aksi
        cout << "hore ";
        cout << a << endl;
        // increment untuk break
        a++;
    } while (a <= 10);

    cin.get();
    return 0;
    
}