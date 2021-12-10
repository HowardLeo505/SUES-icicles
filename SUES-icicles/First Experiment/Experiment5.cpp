#include <iostream>
//#define pi = 3.1415926;
using namespace std;
int main() {
    double r, h, c, s, sb, cv;
    const double pi = 3.14159;
    cin >> r;
    cin >> h;
    c = 2 * pi * r;
    s = pi * (r * r);
    cv = (pi * (r * r)) * h;
    sb = 2 * s + c * h;
    cout << c << endl << s << endl << sb << endl << cv << endl;
}