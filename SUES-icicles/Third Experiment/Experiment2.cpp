#include <iostream>
using namespace std;
int getlen(char *a){
    int length = 0;
    //char *Trans;
    for(;*a!='\0';a++){
    length++;
    }
    return length;
}
int main(){
    char a[500];
    cin >> a;
    cout << getlen(a);
}
