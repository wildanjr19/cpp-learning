#include <iostream>

using namespace std;
int main() {
    
    int a = 5;

    while(a < 10) {
        cout << "Hore ";
        cout << a << endl;
        a += 1; // increment untuk break
    }

    cin.get();
    return 0;
}