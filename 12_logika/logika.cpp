/*
operator logika di cpp
and, or, not
*/
#include <iostream>

using namespace std;

int main() {
    int a = 3;
    int b = 3;

    bool hasil;

    // not 
    hasil = !(a == b);

    // and
    cout << "Untuk and\n";
    hasil = (a == 3) && (b == 3);
    cout << hasil << endl;
    hasil = (a == 4) && (b == 2);
    cout << hasil << endl;
    hasil = (a == 3) && (b == 2);
    cout << hasil << endl;
    hasil = (a == 5) && (b == 5);
    cout << hasil << endl;

    // or
    cout << "Untuk or\n";
    hasil = (a == 3) or (b == 3);
    cout << hasil << endl;
    hasil = (a == 4) or (b == 3);
    cout << hasil << endl;
    hasil = (a == 3) or (b == 4);
    cout << hasil << endl;
    hasil = (a == 5) or (b == 5);
    cout << hasil << endl;
    
    cin.get();
    return 0;
}