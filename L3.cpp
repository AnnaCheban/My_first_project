// L3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int k, b, c;
    cout << "¬вед≥ть трьохзначне число" << endl;
    cin >> k;
    b = (k / 10) % 10;
    c = k % 10;
    cout << boolalpha << ((b < c) || (c == b));
    

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors . Keep it simple!
//   5. Go to Project > Add New Item to create new code files, or Project 
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
