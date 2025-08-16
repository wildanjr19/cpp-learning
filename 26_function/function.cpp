#include <iostream>
# include <cmath>

using namespace std;


/*
Fungsi-fungsi di cmath :
ceil(x)     -> pembulatan ke atas
cos(x)      -> cosinus
sin(x)      -> sinus
exp(x)      -> eksponen
fabs(x)     -> absolut
floor(x)    -> pembulatan ke bawah
fmod(x)     -> modulus dalam float
log(x)      -> logaritma
log10(x)    -> logaritma basis 10
pow(x, y)   -> perpangkatan x pangkat y
sin(x)     -> sinus
sqrt(x)    -> akar dari x
tan(x)    -> tangen
*/


int main() {

    int x;
    
    cout << "Masukkan nilai x : ";
    cin >> x;

    cout << "akar dari x adalah" << sqrt(x) << endl;

    cin.get();
    return 0;
}