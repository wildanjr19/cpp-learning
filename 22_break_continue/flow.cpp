#include <iostream>

using namespace std;

int main() {
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            // continue : skip
            break; // ketika i sampai di lima break, keluar loop
        }
        cout << i << endl;
    }


    return 0;
}