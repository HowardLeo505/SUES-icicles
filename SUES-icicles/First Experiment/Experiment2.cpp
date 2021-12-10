#include<iostream>
using namespace std;
int main() {
	int i,d,c;
	int sum = 0;
	for (i = 1; i <= 10; i++) {
		c = 1;
		for (d = i; d >= 1; d--) {
			c = c * d;
		}
		sum = sum + c;
	}
	cout << sum;
}