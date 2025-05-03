#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0) {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(const Complex& obj) {
        return Complex(real + obj.real, imag + obj.imag);
    }

    // Overload - operator
    Complex operator-(const Complex& obj) {
        return Complex(real - obj.real, imag - obj.imag);
    }

    // Overload * operator
    Complex operator*(const Complex& obj) {
        return Complex(real * obj.real - imag * obj.imag, real * obj.imag + imag * obj.real);
    }

    // Overload / operator
    Complex operator/(const Complex& obj) {
        float denominator = obj.real * obj.real + obj.imag * obj.imag;
        if (denominator == 0) {
            cerr << "خطا: تقسیم بر صفر!" << endl;
            return Complex();
        }
        float newReal = (real * obj.real + imag * obj.imag) / denominator;
        float newImag = (imag * obj.real - real * obj.imag) / denominator;
        return Complex(newReal, newImag);
    }

    // Overload << operator (Friend function)
    friend ostream& operator<<(ostream& out, const Complex& C) {
        out << C.real << (C.imag >= 0 ? "+" : "") << C.imag << "i";
        return out;
    }
};

int main() {
    Complex c1(3, 4);   // 3+4i
    Complex c2(1, 2);   // 1+2i

    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;
    Complex div = c1 / c2;

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;
    cout << "Division: " << div << endl;

    return 0;
}
