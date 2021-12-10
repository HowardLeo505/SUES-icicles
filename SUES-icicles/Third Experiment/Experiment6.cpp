#include<iostream>
#include <iomanip>
using namespace std;
struct student {
	int no;
	char name[20];
	int score1;
	int score2;
	int score3;
	float avge;
};
int main() {
	int i;
	float avge;
	struct student info[5] = { {101,"Zhou",93,89,87},{102,"Yang",85,80,78},{103,"Chen",77,70,83},{104,"Qian",70,67,60},{105,"Li",72,70,69} };
	for (i = 0; i < 5; i++)
	{
		info[i].avge = (float)(info[i].score1 + info[i].score2 + info[i].score3) / 3;
	}
	cout << "No" << setw(10) << "name" << setw(10) << "score1" << setw(10) << "score2" << setw(10) << "score3" << setw(10) << "average" << endl;
	for (i = 0; i < 5; i++) {
		cout << info[i].no << setw(10) << info[i].name << setw(10) << info[i].score1 << setw(10) << info[i].score2 << setw(10) << info[i].score3 << setw(10) << info[i].avge << endl;
	}
}
