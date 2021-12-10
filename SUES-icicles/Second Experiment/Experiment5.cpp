#include<iostream>
#include<string>
using namespace std;
int main(){
	char s[] = "C is a general purpose, procedural, imperative computer   programming language  developed in 1972 by Dennis Ritchie at the Bell Telephone  Laboratories for use with the Unix operating system.";
	int i,b,l,n,sp,p;
	i = 0;
	b = 0;
	l = 0;
	n = 0;
	sp = 0;
	p = 0;
	for(i=0;s[i] != '\0';i++){
		if (s[i] >= 'A' && s[i] <= 'Z'){
			b += 1;
		}
		if (s[i] >='a' && s[i] <= 'z')
		{
			l += 1;
		}
		if (s[i] >= '0' && s[i] <= '9'){
			n += 1;
		}
		if (s[i] == ' '){
			sp  += 1;
		}
		if (s[i] == ','){
			p += 1;
		}
	}
	cout << b << endl << l << endl << n << endl << sp << endl << p << endl;	
}
