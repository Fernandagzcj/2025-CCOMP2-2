#include <iostream>
using namespace std;

int main(){

    //char car = 'A'; //valor numerico 65 en la tabla ASCII
    char car = '6'; //valor numerico 54 en la tabla ASCII

    int val = static_cast<int>(car);
    cout << sizeof(car) << endl;

    int result = val - '0';
    cout << "El valor entero es: " << val << endl;
    cout << result << endl;

    return 0;
}
