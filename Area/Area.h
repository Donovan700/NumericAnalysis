//
// Created by bryan on 13/07/2025.
//

#ifndef AREA_H
#define AREA_H

#include <cmath>

class Area {
private:
    int a, b, n;
    int i;
    int functionType;

public:
    Area(int a, int b, int n, int funcType = 1);
    Area();
    double areaTrapeze(int a, int b, int n);
    double areaTrapeze(int a, int b, int n, int funcType);
    double areaTrapeze(int a, int b, int n, double* coefficients, int degree);
    double fct(double x);
    double evaluateFunction(double x, int functionType);
    double polynomialFunction(double x, double* coefficients, int degree);
    void setFunctionType(int funcType);
    ~Area();

    Area(int a, int b, int n, int funcType = 1) {
        this->a = a;
        this->b = b;
        this->n = n;
        this->functionType = funcType;
    }

    Area() {
        a = 0;
        b = 1;
        n = 100;
        functionType = 1;
    }

    ~Area() {}
    void setFunctionType(int funcType) {
        this->functionType = funcType;
    }

    double areaTrapeze(int a, int b, int n) {
        double result = 0.0;
        if (n > 0 && b >= a) {
            double h = (double)(b - a) / n;
            double sum = evaluateFunction(a, functionType) + evaluateFunction(b, functionType);
            for (int i = 1; i < n; i++) {
                double xi = a + i * h;
                sum += 2 * evaluateFunction(xi, functionType);
            }
            result = ((double)(b - a) / (2.0 * n)) * sum;
        }
        return result;
    }

    double areaTrapeze(int a, int b, int n, int funcType) {
        double result = 0.0;
        if (n > 0 && b >= a) {
            double h = (double)(b - a) / n;
            double sum = evaluateFunction(a, funcType) + evaluateFunction(b, funcType);
            for (int i = 1; i < n; i++) {
                double xi = a + i * h;
                sum += 2 * evaluateFunction(xi, funcType);
            }
            result = ((double)(b - a) / (2.0 * n)) * sum;
        }
        return result;
    }

    double areaTrapeze(int a, int b, int n, double* coefficients, int degree) {
        double result = 0.0;
        if (n > 0 && b >= a) {
            double h = (double)(b - a) / n;
            double sum = polynomialFunction(a, coefficients, degree) + polynomialFunction(b, coefficients, degree);
            for (int i = 1; i < n; i++) {
                double xi = a + i * h;
                sum += 2 * polynomialFunction(xi, coefficients, degree);
            }
            result = ((double)(b - a) / (2.0 * n)) * sum;
        }
        return result;
    }

    double fct(double x) {
        return x * x;
    }

    double evaluateFunction(double x, int functionType) {
        switch(functionType) {
            case 1: return x * x;
            case 2: return sin(x);
            case 3: return exp(x);
            case 4: return 1.0 / (1.0 + x);
            case 5: return sqrt(x);
            case 6: return x * x * x;
            case 7: return cos(x);
            case 8: return log(x);
            case 9: return exp(x*x);
            default: return x * x;
        }
    }

    double polynomialFunction(double x, double* coefficients, int degree) {
        double result = 0.0;
        double power = 1.0;
        for(int i = 0; i <= degree; i++) {
            result += coefficients[i] * power;
            power *= x;
        }
        return result;
    }
};

#endif //AREA_H