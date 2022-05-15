#include <iostream>
#include <ostream>
#include <math.h>
#include <iomanip>

using namespace std;

struct Complex {
    double real;
    double imag;
};

Complex operator + (Complex a, Complex b) {
    Complex sp;
    sp.real = a.real + b.real;
    sp.imag = a.imag + b.imag;

    return sp;
}

Complex operator - (Complex a, Complex b) {
    Complex sp;
    sp.real = a.real - b.real;
    sp.imag = a.imag - b.imag;

    return sp;
}

Complex operator * (Complex a, Complex b) {
    Complex sp;
    sp.real = a.real * b.real - a.imag * b.imag;
    sp.imag = a.real * b.imag + a.imag * b.real;

    return sp;
}

Complex operator / (Complex a, Complex b){
    Complex sp;
    sp.real = (b.real * a.real + a.imag * b.imag) / (b.real * b.real + b.imag * b.imag);
    sp.imag = (b.real * a.imag - b.imag * a.real) / (b.real * b.real + b.imag * b.imag);

    return sp;
 }

ostream& operator << (ostream& out, const Complex &a) {
    out << '(' << std::setprecision(2) << a.real << (a.imag >= 0 ? '+' : '-') << std::setprecision(2) << fabs(a.imag) << 'i' << ')';
    return out;
}

int main() {
    double real_a, real_b, img_a, img_b;
    cin >> real_a >> img_a;
    cin >> real_b >> img_b;

    Complex a{real_a, img_a};
    Complex b{real_b, img_b};

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    return 0;
}
