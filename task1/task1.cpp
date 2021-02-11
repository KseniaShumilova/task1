#include <iostream>
#include <cmath>
using namespace std;
void main()
{
    double x = 0;
    double fun;
    //для данных, значения которых заданы в виде констант
    fun = (1 + sin(2 * x)) / cos(2 * x);
    cout << "x = 0" << endl;
    cout << "Calculation result f = " << fun << endl;
    //для данных, вводимых пользователем с клавиатуры
    cout << "Enter a value x = "; cin >> x;
    fun = (1 + sin(2 * x)) / cos(2 * x);
    cout << "Calculation result f = " << fun << endl;
}