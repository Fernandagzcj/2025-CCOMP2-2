#include <iostream>

using namespace std;

int main(){

    /*unsigned short val1 = 65534;
    cout << "El valor es " << val1 << endl;
    val1 = val1 + 1;
    cout << "El valor es " << val1 << endl;
    val1 = val1 + 1;
    cout << "El valor es " << val1 << endl;*/

    char car = 'A';

    int val = static_cast<int>(car);
    cout << sizeof(car) << endl;
    cout << "El valor entero es: " << val << endl;

    return 0;

}
