#include<iostream>
using namespace std;
int main(){
    int i,m,sum;
    sum = 0;
    for(i=1;i<=15;i++)
    {
        if(i<10){
            m=i*10;
        }
        else if(i>=10&&i<=15){
            m=i*100;
        }
        sum=sum+m+i;
        cout << i << endl;
        cout << sum << endl;
    }
}