#include<iostream> 
#include<cmath>
using namespace std;
double addition(double a, double b){
    return a + b;
}
double power(double base, int exponent) {
    double result = 1.0;
    bool isNegative = (exponent < 0);
    exponent = abs(exponent);

    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }




double multiplication(double a, double b) {
    return a*b;
}
double substraction(double a, double b) {
    return a-b;
}
int main() {
    double base;
    int exponent;

    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exponent;

    double result = power(base, exponent);
    cout << base << "^" << exponent << " = " << result << std::endl;

    return 0;
}