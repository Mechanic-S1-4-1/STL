#include <iostream>
using namespace std;

void main()
{
	int y, x = 1, total = 0;
	while (x <= 5)
	{
		x++;
		y = x * x;
		total += y;

	}
	cout << total;
}