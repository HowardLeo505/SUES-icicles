#include<iostream>
using namespace std;
int main()
{
    int t, i, c;
    for (t = 0; t < 34; t++)
    {
        for (i = 0; i < 51; i++)
        {
            c = 100 - t - i;
            if (3*t + 2*i + 0.5*c == 100)
            {
                cout << t << '\t' << i << '\t' << c << endl;
            }
        }
    }
}
