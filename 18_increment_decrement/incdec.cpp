#include <iostream>

using namespace std;

int main() {
    // incerement dan decrement
    // pre dan post

    int a = 5;
    int b = 5;

    // postincrement
    cout << a << endl;
    cout << a++ << endl;
    cout << a << endl;

    // preincrement
    cout << b << endl;
    cout << ++b << endl;
    cout << b << endl;

    cin.get();
    return 0;
}