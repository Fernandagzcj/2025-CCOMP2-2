#include <iostream>

using namespace std;

//Recursividad: Cuando una función se llama a si misma

long long factorial (long n){
    if(n == 1)
        return 1;
    else
        return n *factorial(n-1);
}

//Fibonacci: fib(n)= fib(n-1) * fib(n-2)

long long fibonacci(long n){
    if(n == 0 || n == 0)
        return 1;
    else
        return fibonacci(n-1) * fibonacci(n-2);
}

long contarDigitos(long n){
    if(n < 10)
        return 1;
    else
        return 1 + contarDigitos(n/10);
}

int main(){

    cout << factorial(5) << endl;
    cout << fibonacci(0) << endl;
    cout << contarDigitos(854) << endl;

    return 0;
}
