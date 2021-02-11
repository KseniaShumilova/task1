#include <iostream>
using namespace std;
double fun(double x);
void main()
{
    double x = 0;
    //для данных, значения которых заданы в виде констант
    cout << "x = 0" << endl;
    cout << "Calculation result f = " << fun(x) << endl;
    //для данных, вводимых пользователем с клавиатуры
    cout << "Enter a value x = "; cin >> x;
    cout << "Calculation result f = " << fun(x) << endl;
}