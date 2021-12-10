#include<iostream>
using namespace std;
int factorial(int n0) {
	int i, total;
	total = 1;
	if (n0 != 0) {
		for (i = n0; i > 0; i--) {
			total = total * i;
		}
		return total;
	}
	else {
		return 1;
	}
}

int main() {
	int n,c,s;
	cin >> n;
	for (s = n,c = 0; s > 0; s--) {
		c += factorial(s);
	}
	cout << c << endl;
}