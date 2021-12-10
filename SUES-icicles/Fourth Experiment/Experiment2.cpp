#include<iostream>
#include <iomanip>
#include<string>
using namespace std;
class student {
private:
	int no;
	string name;
	int score1;
	int score2;
	int score3;
public:
	student() {
	}
	student(string name0, int score01, int score02, int score03) {
		name = name0;
		score1 = score01;
		score2 = score02;
		score3 = score03;
	}
	void display() {
		cout << name << endl << score1 << endl << score2 << endl << score3 << endl;
	}
	~student() {

	}

};
int main() {
	student s("LuHaohan", 90, 90, 90);
	s.display();
}
