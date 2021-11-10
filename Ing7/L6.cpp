#include <iostream> 
#include <iomanip> 
#include "windows.h"

using namespace std;

int main()
{
	int a, b;
	float h;
	cout << "Enter a =";
	cin >> a;
	cout << "Enter b =";
	cin >> b;
	cout << "Enter h =";
	cin >> h;
	
	float y, x = a;
	do {
		y = pow(sin(x), 2) + 2 * cos(x) + 3;
		cout << setw(10) << "x=" << x << setw(10) << "y=" << y << endl;
		x += h;
	} while (x <= b);

		system("pause");
	return 0;
}




