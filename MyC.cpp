

#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k, b, c;
    int a, b;
    cout << "¬вед≥ть трьохзначне число" << endl;
    cin >> k;
    b = (k / 10) % 10;      //it is "b"
    c = k % 10;
    cout << boolalpha << ((b < c) || (c == b));
    cout << "Good morning!";

    return 0;
}


