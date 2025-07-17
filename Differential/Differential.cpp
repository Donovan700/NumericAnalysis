#include <iostream>
#include <iomanip>

// y'(t) = f(t, y(t))
// Exemple : y'(t) = 2t + 1
double f(double t[], double y[], int j) {
    //Too lazy to automate this XD, change your fuction here
    return 2 * t[j] + 1;
}

int main() {
    double t0, y0, h;
    int n;

    std::cout << "Enter t0 (Initial value of t): ";
    std::cin >> t0;

    std::cout << "Enter y0 (Initial value of y): ";
    std::cin >> y0;

    std::cout << "Enter the step h: ";
    std::cin >> h;

    std::cout << "Enter the number of iterations n: ";
    std::cin >> n;


    double t[n+1];
    double y[n+1];

    t[0] = t0;
    y[0] = y0;

    std::cout << "\ni\tt[i]\ty[i]" << std::endl;
    std::cout << std::fixed << std::setprecision(2);

    for (int i = 0; i < n; ++i) {
        t[i+1] = t[i] + h;
        y[i+1] = y[i] + h * f(t, y, i);

        std::cout << i << "\t" << t[i] << "\t" << y[i] << std::endl;
    }

    std::cout << n << "\t" << t[n] << "\t" << y[n] << std::endl;

    return 0;
}

