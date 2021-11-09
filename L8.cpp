using namespace std;

#include <iostream>
#include <math.h>

double func1(double, double, double);
//double func2(double);

int main()
{
	double x, y, a;
	float e = exp(1.0);
	printf("input X: ");
	scanf_s("%lf", &x);
	printf("input Y: ");
	scanf_s("%lf", &y);
	
	cout << func1(x, a, y);

}

double func1(double x, double a, double y){
	double a = (1 - pow(2 * x, 1. / 2) + pow(x, 4) + pow(e, 4 * y)) / (1 - pow(8 * pow(y, 3), 1. / 4)) / (1 - pow(abs(2 + y), 1. / 3));
	if (1 - pow(abs(2 + y), 1. / 3) == 0)
		return 0.0;
	if ((1 - pow(8 * pow(y, 3), 1. / 4)) / (1 - pow(abs(2 + y), 1. / 3)) == 0)){
	return 0.0;
	else
		return a;
	}
}

//double func2(double);

double func1(double x, double a, double y)
{
	return 0.0;
}
