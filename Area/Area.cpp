#include "Area.h"
#include <iostream>
#include <iomanip>
using namespace std;
void showMenu();
void showResult(double area, int a, int b, int funcType);

int main()
{
    int a, b, n, funcType;
    cout << "=== Trapezoidal Rule Integration ===" << endl;
    cout << "Enter a, b [a;b] for integration" << endl;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "\nEnter the function Type: " << endl;
    showMenu();
    cout << "Choice: "; cin >> funcType;
    cout << "Enter n (number of intervals): "; cin >> n;
    Area calculator;
    double result = calculator.areaTrapeze(a, b, n, funcType);
    showResult(result, a, b, funcType);
    return 0;
}

void showMenu()
{
    cout << "1. f(x) = x²" << endl;
    cout << "2. f(x) = sin(x)" << endl;
    cout << "3. f(x) = e^x" << endl;
    cout << "4. f(x) = 1/(1+x)" << endl;
    cout << "5. f(x) = sqrt(x)" << endl;
    cout << "6. f(x) = x³" << endl;
    cout << "7. f(x) = cos(x)" << endl;
    cout << "8. f(x) = ln(x)" << endl;
    cout << "9. f(x) = e^(x²)" << endl;
}

void showResult(double area, int a, int b, int funcType)
{
    cout << "\n=== RESULT ===" << endl;
    cout << fixed << setprecision(6);
    cout << "Integration from " << a << " to " << b << endl;

    cout << "Function: ";
    switch(funcType) {
        case 1: cout << "f(x) = x²"; break;
        case 2: cout << "f(x) = sin(x)"; break;
        case 3: cout << "f(x) = e^x"; break;
        case 4: cout << "f(x) = 1/(1+x)"; break;
        case 5: cout << "f(x) = sqrt(x)"; break;
        case 6: cout << "f(x) = x³"; break;
        case 7: cout << "f(x) = cos(x)"; break;
        case 8: cout << "f(x) = ln(x)"; break;
        default: cout << "Unknown function"; break;
    }
    cout << endl;

    cout << "Calculated Area: " << area << endl;
}