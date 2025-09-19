#include <iostream>

using namespace std;

bool capicua(string num, int i, int j){
    if(i >= j)
        return true;
    else if(num[i]=num[j])
        return false;
    else
        return capicua(num, i+1, j-1);
}

bool capicua(long long n){
    string num = to_string(n);
    return capicua(num, 0, num.size()-1);
}

int main(){
    long long numero = 12321;
    if(capicua(numero))
        cout << numero << " es capicua" << endl;
    else
        cout << numero << " no es capicua" << endl;

    return 0;
}
