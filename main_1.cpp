/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double x, y;

    cout << "Введите значение x: ";
    cin >> x;

    if (x >= -3 && x < -2) {
        y = -2 - x;
        cout << "Функция равна: " << y;
    } else if (x >= -2 && x < -1) {
        y = sqrt(1 - (x + 1) * (x + 1));
        cout << "Функция равна: " << y;
    } else if (x >= -1 && x < 1) {
        y = 1;
        cout << "Функция равна: " << -y;
    } else if (x >= 1 && x < 2) {
        y = -x + 1;
        cout << "Функция равна: " << y;
    } else if (x >= 2 && x <= 5) {
        y = -1;
        cout << "Функция равна: " << y;
    } else {
        cout << "x вне диапазона функции" << endl;
    }

    cin.get(); 
    return 0;
}
