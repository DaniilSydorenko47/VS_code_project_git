#include <iostream>
#include <cmath>
#include <format>
#include <numbers>

using namespace std;

double arcctg(double x) {
    return numbers::pi/2 - atan(x);
}

int main() {
    double x;
    cout << "Enter x: " << endl;
    cin >> x;
    cout << format("{:.4f}", arcctg(x)) << endl;
    
    return 0;
}