/*
Komparasi boolean atau perbandingan true dan false
biasa digunakan untuk if else statement
*/

#include <iostream>

using namespace std;

int main() 
{
    int a = 2;
    int b = 3;

    bool hasil1, hasil2;
    // sebanding
    hasil1 = (a == b);
    

    // tidak sebanding
    hasil2 = ( a != b);
    
    // kita juga bisa membandingkan lebih dari atau kurang dari
    hasil1 = (a < b);
    hasil2 = (a > b);

    
    cout << hasil1 << endl;
    cout << hasil2 << endl;

    cin.get();
    return 0;
}