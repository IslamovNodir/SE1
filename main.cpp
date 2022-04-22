#include <iostream>
//educational program
//Author: Bogdan, KE - 418, 2022
using namespace std;

int main()
{
    int a, b;
    cout << "Enter an integer a: ";
    cin >> a;
    cout << "Enter an integer b: ";
    cin >> b;
    int div = a / b;
    int diff = a - b;
    cout << "Diff numbers a - b: " << diff;
    cout << "\nDivision numbers a / b: " << div;
}
