#include<iostream> 
#include<cmath>
using namespace std;
double addition(double a, double b){
    return a + b;
}




double multiplication(double a, double b) {
    return a*b;
}

double power(double base, int exponent) {
    double result = 1.0;
    bool isNegative = (exponent < 0);
    exponent = abs(exponent);

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
int main() {
    double base;
    int exponent;

    std::cout << "Enter base: ";
    std::cin >> base;
    std::cout << "Enter exponent: ";
    std::cin >> exponent;

    double result = power(base, exponent);
    std::cout << base << "^" << exponent << " = " << result << std::endl;

    return 0;
}