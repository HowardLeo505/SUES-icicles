#include <iostream>
using namespace std;

int sushu(long s)
{
	int i;
	for ( i = s - 1 ; i > 1; i--)
	{
		if (s % i == 0)
		{
			return 0;
		}
	}
	return 1;
}

int main()
{
	long s;
	cin >> s;
	cout << sushu(s)<<endl;
}
