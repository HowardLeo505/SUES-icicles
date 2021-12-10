#include<iostream>
using namespace std;
int main() {
	int i = 0;
	double a[10];
	for (; i < 10; i++) {
		cin >> a[i];
	}
	cout << "顺序" << endl;
	for (i = 0; i < 10; i++) {
		cout << a[i] << endl;
	}
	cout << "逆序" << endl;
	for (i = 9; i >= 0; i--) {
		cout << a[i] << endl;
	}
}
