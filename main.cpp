#include <iostream>
#include "rational.h"

int main()
{
    using namespace std;

    Rational a(1,2), b(-1,6);

    cout << "a= " << a << "\n";
    cout << "b= " << b << "\n";

    cout << "a + b = " << a+b << "\n";
    cout << "a - b = " << a-b << "\n";
    cout << "a * b = " << a*b << "\n";
    cout << "a / b = " << a/b << "\n";
    cout << "------------------------\n";

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    a *= b;
    cout << "(a *= b) | a = " << a << "\n";
    cout << "------------------------\n";

    cout << "a= " << a << "\n";
    cout << "b= " << b << "\n";

    a /= b;
    cout << "(a /= b) | a = " << a << "\n";
    cout << "------------------------\n";

    cout << "a= " << a << "\n";
    cout << "b= " << b << "\n";

    a += b;
    cout << "(a += b) | a = " << a << "\n";
    cout << "------------------------\n";

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    a -= b;
    cout << "(a -= b) | a = " << a << "\n";
    cout << "------------------------\n";

    cout << "a = " << a << "\n";
    cout << "b = " << b << "\n";

    cout << "(a > b) = " << (a > b) << "\n";
    cout << "(a < b) = " << (a < b) << "\n";
    cout << "(a >= b) = " << (a >= b) << "\n";
    cout << "(a <= b) = " << (a <= b) << "\n";
    cout << "(a == b) = " << (a == b) << "\n";
    cout << "(a != b) = " << (a != b) << "\n";
    cout << "------------------------\n";

    return 0;
}
