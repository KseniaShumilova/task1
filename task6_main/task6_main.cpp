#include <iostream>
#include <cmath>
using namespace std;
void fun(void);
void main()
{
    //для данных, значения которых заданы в виде констант
    double x = 0;
    fun();
    cout << "x = 0" << endl;
    cout << "Calculation result f = " << result << endl;
    //для данных, вводимых пользователем с клавиатуры
    cout << "Enter a value x = "; cin >> x;
    cout << "Calculation result f = " << result << endl;
}