#include <iostream>
#include <cmath>
using namespace std;
double fun(double x)
{
	return ((1 + sin(2 * x)) / cos(2 * x));
}
void main()
{
	//для данных, значения которых заданы в виде констант
	double x = 0;
    cout << "x = 0" << endl;
    cout << "Calculation result f = " << fun(x) << endl;
    //для данных, вводимых пользователем с клавиатуры
    cout << "Enter a value x = "; cin >> x;
    cout << "Calculation result f = " << fun(x) << endl;
}