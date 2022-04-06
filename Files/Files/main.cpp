#include <fstream>
using namespace std;
int main()
{
	ofstream fout;
	fout.open("file.txt");
	fout << "Привет, мир!";
	fout.close();
	return 0;
}