#include <iostream>
using namespace std;
int main(){
    int i;
    int n;
    int * pt = new int[10];
    for(i=0;i<=10;i++){
        cin >> pt[i];
    }
    for(n=9;n>=0;n--){
        cout << *(pt + n) << endl;
    }
}
