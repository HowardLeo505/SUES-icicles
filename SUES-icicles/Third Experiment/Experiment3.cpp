#include <iostream>
#include <iostream>
using namespace std;
void swapx(int *c, int *d) {
	int n;
	n = *c;
	//cout << c << endl;
	*c = *d;
	*d = n;
	//return (c,d);
}


int main() {
	int a, b;
	cin >> a;
	cin >> b;
	swapx(&a, &b);
	cout << a << endl;
	cout << b << endl;
	return 0;
}
