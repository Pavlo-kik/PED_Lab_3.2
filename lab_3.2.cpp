﻿#include <iostream>
#include <cmath>
#include <math.h>

using namespace std;

int main() {
    double x; // вхідний аргумент
    double a; // вхідний параметр
    double b; // вхідний параметр
    double c; // вхідний параметр
    double F; // результат обчислення виразу

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "x = "; cin >> x;

    // спосіб 1: розгалуження в скороченій формі
    if (x < 3 && b != 0)
        F = a * pow(x, 2) - b * x + c;
    if (x > 3 && b == 0)
        F = (x - a) / (x - c);
    if (!(x < 3 && b != 0) && !(x > 3 && b == 0))
        F = x / c;
    cout << endl;
    cout << "1) F = " << F << endl;

    // спосіб 2: розгалуження в повній формі
    if (x < 3 && b != 0)
        F = a * pow(x, 2) - b * x + c;
    else
        if (x > 3 && b == 0)
            F = (x - a) / (x - c);
        else
            F = x / c;

    cout << "2) F = " << F << endl;
    cin.get();
    return 0;
}