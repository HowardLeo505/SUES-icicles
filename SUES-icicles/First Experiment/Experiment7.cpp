#include <iostream>
using namespace std;
int max(int a, int b) {
	if (a > b) {
		return a;
	}
	else {
		return b;
	}
}
int main() {
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	d = max(a, b);
	c = max(d, c);
	cout << c << endl;
}