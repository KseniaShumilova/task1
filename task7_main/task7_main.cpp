#include <iostream>
#include <cmath>
#include "task7.h"
using namespace std;
double x, result;
void fun();
void main()
{
    //для данных, значения которых заданы в виде констант
    x = 0;
    cout << "x = 0" << endl;
    fun();
    cout << "Calculation result f = " << result << endl;
    //для данных, вводимых пользователем с клавиатуры
    cout << "Enter a value x = "; cin >> x;
    fun();
    cout << "Calculation result f = " << result << endl;
}
