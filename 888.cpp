#define _USE_MATH_DEFINES
#include <iostream>  
#include <cmath>
#include <iomanip>

using namespace std;
int func1(int, int);
double func2(double);
bool func3(int, double);

int main()
{
	double t, y;
	int x;
	cout << "Input x, y for func1: " << endl;
	cin >> t >> y;
	cout << "Input x for func2: " << endl;
	cin >> x;

	int A = func1(t, y);
	double B = func2(x);      //message
		
}
int func1(int t, int y) {
	if ((1 - pow(abs(2 + y), 1. / 3)) && (1 - pow(8 * pow(y, 3), 1. / 4)) / (1 - pow(abs(2 + y), 1. / 3)) != 0)
	{
		return (1 - pow(2 * t, 1. / 2) + pow(t, 4) + pow(M_E, 4 * y)) / (1 - pow(8 * pow(y, 3), 1. / 4)) / (1 - pow(abs(2 + y), 1. / 3));
	}
	else
		return 1;
}

double func2(double x) {
	if ((pow(1 + cos(5 * x), 2)) != 0)
	{
		return (4 * pow(sin(x), 3)) / (pow(1 + cos(5 * x), 2) + cos(80));

	}
	else
		return 1;

}





