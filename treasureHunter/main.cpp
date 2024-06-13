#include <iostream>

using namespace std;

#define MAX 10  // palace is max 10 character

int main() {

	int palace[MAX][MAX], n, row, column, hint, newHint;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> palace[i][j];
		}
	}

	newHint = 11;
	do {
		hint = newHint;
		cout << hint << " ";
		row = hint / 10;
		column = hint % 10;
		newHint = palace[row - 1][column - 1];
	} while (hint != newHint);

	return 0;
}
