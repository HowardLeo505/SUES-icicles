#include <iostream>
using namespace std;
int mat[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
int l, r, n;
int main() {
	int mat[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int l, r, n;
	cout << "原矩阵" << endl;
	for (l = 0; l < 3; l++) {
		for (r = 0; r < 3; r++) {
			cout << mat[l][r] << '\t';
		}
		cout << '\n';
	}
	cout << "转置矩阵" << endl;
	n = 0;
	n = mat[0][1];
	mat[0][1] = mat[1][0];
	mat[1][0] = n;
	n = mat[0][2];
	mat[0][2] = mat[2][0];
	mat[2][0] = n;
	n = mat[2][1];
	mat[2][1] = mat[1][2];
	mat[1][2] = n;
	for (l = 0; l < 3; l++) {
		for (r = 0; r < 3; r++) {
			cout << mat[l][r] << '\t';
		}
		cout << '\n';
	}
}
