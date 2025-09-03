#include <iostream>

using namespace std;

int main(){

    int i = 1;
    while (i <= 10){
        cout <<i << endl;
        i = i + 1;
    }

    i = 9;
    while(i >= 1){
        cout << i << endl;
        i = i - 1;
    }

    int i = 3;
    while(i < 100){
        cout << i << endl;
        i += 3;
    }

    int i = 1;
    while(i % 3 == 0){
        cout<< i << endl;
        i = i + 1;
    }

    return 0;
}
