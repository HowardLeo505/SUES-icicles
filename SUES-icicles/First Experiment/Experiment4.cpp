#include <iostream>;
using namespace std;
int main() {
	double n;
	int limit;
	double sum;
	n = 1;
	sum = 0;
	//cout << "Please type the limit to set it.";
	cin >> limit;
	do {
		sum = sum + (1/n);
		n = n + 1;
	} 
	while (sum <= limit);
	cout << n-1 << endl;
}