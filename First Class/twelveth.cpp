#include<iostream>
#include <iomanip>

using namespace std;
int main()
{
    double a;
//    int b;
//    char c;
//    long long d;

    cout << "Enter a double value: ";
    cin >> a;

//    cout << "Enter an integer value: ";
//    cin >> b;
//
//    cout << "Enter a character: ";
//    cin >> c;
//
//    cout << "Enter a double value: ";
//    cin >> d;
//
//    cout << a << "\n" << b << "\n" << c << "\n" << d;
    cout << fixed << setprecision(5);
    cout << a;
}

