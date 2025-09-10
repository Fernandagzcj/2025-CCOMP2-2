#include <iostream>
#include <cmath>

using namespace std;

//Palindromo
int main(){

    long n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int numC = n;
    int numDigits = 0;
    while(numC < n){
        numC /= 10;
        numDigits++;
    }

    while(n != 0){
        int ini = n / pow(10, numDigits - 1);
        int fin = n % 10;
        if(ini != fin){
            cout << "NO ES PALINDROMO"<< endl;
            break;
        }
        n = (n % static_cast<int>(pow (10, numDigits - 1))) / 10;

        numDigits -= 2;

        cout << ini << endl;
        cout << fin << endl;
        cout << n << endl;
    }
    return 0;
}
