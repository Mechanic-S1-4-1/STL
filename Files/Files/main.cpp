#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("file.txt");
	fout << "������, ���!";
	fout.close();
	return 0;
}