#include <iostream>
#include <cmath>
using namespace std;
double x, result;
void fun(void);
void main()
{
    //для данных, значения которых заданы в виде констант
    double x = 0;
    cout << "x = 0" << endl;
    fun();
    cout << "Calculation result f = " << result << endl;
    //для данных, вводимых пользователем с клавиатуры
    cout << "Enter a value x = "; cin >> x;
    cout << "Calculation result f = " << result << endl;
}
void fun(void)
{
    result = ((1 + sin(2 * x)) / cos(2 * x));
}