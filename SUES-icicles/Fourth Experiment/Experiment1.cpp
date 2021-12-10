#include <iostream>
#include <cmath>
using namespace std;
class Complex {
private:
    double re, im;
public:
    Complex() {
        re = 0;
        im = 0;
    }

    Complex(double re0, double im0) {
        re = re0;
        im = im0;
    }

    float mod() {
        return sqrt(re * re + im * im);
    }

    Complex add(Complex another) {
        return Complex(re + another.re, im + another.im);

    }

    void display() {
        cout << re << "+" << im << "i" << endl;
    }
    ~Complex() {
        cout << "析构函数" << endl;
    }
};



int main() {
    //Complex A;
    Complex A = Complex(2, 2);
    A.display();
    cout << "复数的模" << A.mod() << endl;
    Complex B = Complex(1, 3);
    B.display();
    Complex D = A.add(B);
    D.display();
}