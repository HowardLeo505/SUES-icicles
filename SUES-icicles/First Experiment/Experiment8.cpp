#include <iostream>
using namespace std;
int judge(int score) {
    if (score >= 90 && score<=100) {
        return 1;
    }
    if (score <= 89 && score >= 80) {
        return 2;
    }
    if (score <= 79 && score >= 70) {
        return 3;
    }
    if (score <= 69 && score >= 60) {
        return 4;
    }
    if (score <= 60 && score >= 0) {
        return 5;
    }
}
int main() {
    int input;
    int score;
    int i;
    for(i=0;i<=2;i++)
    {
        cin >> input;
        score = judge(input);
        switch (score) {
            case 1: cout << "A"<<endl;
                break;
            case 2: cout << "B"<<endl;
                break;
            case 3: cout << "C"<<endl;
                break;
            case 4: cout << "D"<<endl;
                break;
            case 5: cout << "E"<<endl;
                break;
            default: cout << "请输入0-100的整数"<<endl;
        }
    }
}