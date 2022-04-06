#include <iostream>

using namespace std;

#define CHESS_ONE
#define CHESS_TWO

#define  VERT_LINE           (char)179
#define  HORIZ_LINE          (char)196
#define  UPPER_LEFT_ANGLE    (char)218
#define  UPPER_RIGHT_ANGLE   (char)191
#define  LOWER_LEFT_ANGLE    (char)192
#define  LOWER_RIGHT_ANGLE   (char)217
#define  WHITE_BOX           (char)219
#define  SPACE                "  "

void main() {

	setlocale(LC_ALL, "rus");

	int n;
	cout << "¬ведите размер фигуры: ";
	cin >> n;

#ifdef CHESS_ONE
	setlocale(0, "C");
	n++;
	for (int i = 0;i <= n;i++) {
		for (int j = 0;j <= n;j++) {
			if (i == 0 && j == 0)
				cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)
				cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)
				cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)
				cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)
				cout << HORIZ_LINE<<HORIZ_LINE;
			else if (j == 0 || j == n)
				cout << VERT_LINE;
			else if ((i + j) % 2 == 0)
				cout << WHITE_BOX << WHITE_BOX;
			else cout <<SPACE;
		}
		cout << endl;
	}
#endif

#ifdef CHESS_TWO
	for (int i = 0;i < n;i++) {
		for (int j = 0;j < n;j++) {
			cout << "+ ";
		}
		cout << endl;
	}
#endif
}