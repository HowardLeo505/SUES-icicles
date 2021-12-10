#include <iostream>
using namespace std;

struct date
{
    int year;
    int month;
    int day;
};

int main()
{
    struct date input;
    int count;
    cin >> input.year >> input.month >> input.day;

    count = 0;
    int i;
    int yearr[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int yearnr[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
    if (input.year % 4 == 0) {
        for (i = 0; i < input.month - 1; i++) {
            count += yearnr[i];
        }
    }
    else {
        for (i = 0; i < input.month - 1; i++) {
            count += yearr[i];
        }
    }
    count += input.day;

    cout << count << endl;
    return 0;
}