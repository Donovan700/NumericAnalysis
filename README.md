# Numerical Methods Library

A C++ library implementing various numerical analysis methods for mathematical computations.

## 📚 Overview

This library provides implementations of fundamental numerical methods commonly used in scientific computing and engineering applications. The library is organized into modules for different mathematical domains.

## 🗂️ Project Structure

```
numerical-methods/
├── Area/                    # Numerical integration methods
│   ├── Area.h              # Trapezoidal rule implementation
│   └── Area.cpp            # Interactive integration calculator
├── Differential/           # Differential calculus methods (planned)
├── Horner/                 # Horner's method for polynomials (planned)
└── README.md
```

## 🔧 Current Features

### Area Module (Numerical Integration)

#### Trapezoidal Rule
- **Purpose**: Approximate definite integrals using the trapezoidal rule
- **Formula**: `∫[a,b] f(x)dx ≈ ((b-a)/(2n)) × [f(a) + f(b) + 2∑f(xi)]`
- **Supported Functions**:
    1. `f(x) = x²` - Quadratic function
    2. `f(x) = sin(x)` - Sine function
    3. `f(x) = e^x` - Exponential function
    4. `f(x) = 1/(1+x)` - Rational function
    5. `f(x) = √x` - Square root function
    6. `f(x) = x³` - Cubic function
    7. `f(x) = cos(x)` - Cosine function
    8. `f(x) = ln(x)` - Natural logarithm
  9. `f(x) = e^(x²)` - exponential and polynom function

#### Features
- **Multiple Function Types**: Pre-defined mathematical functions
- **Polynomial Support**: Custom polynomial evaluation with user-defined coefficients
- **Flexible Interface**: Multiple overloaded methods for different use cases
- **Interactive CLI**: User-friendly command-line interface

## 🚀 Getting Started

### Prerequisites
- C++ compiler (GCC, Clang, or MSVC)
- Standard C++ library support for `<cmath>`

### Compilation
```bash
g++ -o area_calculator area/main.cpp -lm
```

### Usage

#### Interactive Mode
```bash
./area_calculator
```

#### Programmatic Usage
```cpp
#include "Area.h"

// Create calculator instance
Area calc;

// Calculate area under x² from 0 to 2 with 1000 intervals
double area = calc.areaTrapeze(0, 2, 1000, 1);

// Using polynomial: 3x² + 2x + 1
double coeffs[] = {1, 2, 3};  // coefficients for x⁰, x¹, x²
double polyArea = calc.areaTrapeze(0, 2, 1000, coeffs, 2);
```

## 📊 Example Output

```
=== Trapezoidal Rule Integration ===
Enter a, b [a;b] for integration
a: 0
b: 2
Enter the function Type: 
1. f(x) = x²
2. f(x) = sin(x)
3. f(x) = e^x
4. f(x) = 1/(1+x)
5. f(x) = sqrt(x)
6. f(x) = x³
7. f(x) = cos(x)
8. f(x) = ln(x)
9. f(x) = e^(x²)
Choice: 1
Enter n (number of intervals): 1000

=== RESULT ===
Integration from 0 to 2
Function: f(x) = x²
Calculated Area: 2.666667
```

## 🔮 Planned Features

### Differential Calculus Module
- Numerical differentiation methods
- Forward, backward, and central difference approximations
- Higher-order derivatives

### Horner's Method Module
- Efficient polynomial evaluation
- Polynomial root finding
- Synthetic division implementation

## 🏗️ API Reference

### Area Class

#### Constructors
```cpp
Area()                                    // Default constructor
Area(int a, int b, int n, int funcType)  // Parameterized constructor
```

#### Methods
```cpp
double areaTrapeze(int a, int b, int n)                           // Use default function
double areaTrapeze(int a, int b, int n, int funcType)            // Specify function type
double areaTrapeze(int a, int b, int n, double* coeffs, int deg) // Polynomial evaluation
void setFunctionType(int funcType)                               // Set function type
```

#### Parameters
- `a`, `b`: Integration bounds [a, b]
- `n`: Number of intervals (higher = more accurate)
- `funcType`: Function type (1-8)
- `coeffs`: Polynomial coefficients array
- `deg`: Polynomial degree

## 📈 Accuracy Notes

The trapezoidal rule provides second-order accuracy O(h²) where h = (b-a)/n. For better accuracy:
- Increase the number of intervals `n`
- Consider the smoothness of the function
- Be aware of potential numerical errors with very large `n`

## 🤝 Contributing

Contributions are welcome! Please feel free to submit pull requests or open issues for:
- Bug fixes
- New numerical methods
- Performance improvements
- Documentation enhancements

---

*This library is designed for educational and research purposes in numerical analysis and scientific computing.*