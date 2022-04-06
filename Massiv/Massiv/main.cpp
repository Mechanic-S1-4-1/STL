#include <iostream>

using namespace std;

//#define INPUT_MASSIV
//#define PRINT_REVERSE_MASSIVE
//#define SUM_MASSIV
//#define AVERAGE_MASSIVE
//#define MIN_MAX_MASSIV


#ifdef INPUT_MASSIVE

void Input(int arr[], const int n);

void main()
{
	setlocale(0, "rus");

	const int size = 5;
	int arr[size];
	Input(arr, size);
}

void Input(int arr[], const int size) {
	for (int i = 0;i < size;i++)
	{
		cout << "¬ведите элемент массива: \t";
		cin >> arr[i];
	}
	cout << "\n";

	for (int i = 0; i < size; i++)
	{ 
		cout << arr[i] << "\t";
	}
}
#endif

#ifdef PRINT_REVERSE_MASSIVE
void reverse(int arr[], const int n);

void main()
{
	setlocale(0, "rus");

	const int size = 5;
	int arr[size];
	Input(arr, size);
}

void reverse(int arr[], const int size) {
	for (int i = 0;i < size;i++)
	{
		cout <<"¬ведите элемент массива: ";
		cin >> arr[i];
	}
	cout << "\n";

	for (int i = size-1; i != -1; i--)
	{
		cout << arr[i] << "\t";
	}
}
#endif

#ifdef SUM_MASSIV
int sum(int* arr, int n);

int main() {
	setlocale(0, "rus");

	int n;

	cout << "¬ведите размер массива: ";
	cin >> n;

	int* arr = new int[n];
	cout << "¬ведите элементы массива: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "—умма элементов равна: " << sum(arr, n) << endl;
}

int sum(int* arr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum;
}
#endif

#ifdef AVERAGE_MASSIVE

double avr(int* arr, int n);

int main() 
{
	setlocale(0, "rus");

	int n;

	cout << "¬ведите размер массива: ";
	cin >> n;

	int* arr = new int[n];
	cout << "¬ведите элементы массива: ";
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	cout << "—реднее арифметическое элементов массива: " << avr(arr, n) << endl;
}

double avr(int* arr, int n) 
{
	double sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}

	return sum/n;
}

#endif

#ifdef MIN_MAX_MASSIV

int maxMinMass(int arr[], const int size,int max,int min);

int main()
{
	setlocale(0, "rus");
	const int size=5;
	int arr[size] = {5,8,4,34,56};
	int min = arr[0];
	int max = arr[0];

	cout << "MAX: " << max << endl;
	cout << "MIN: " << min << endl;
}

int maxMinMass(int arr[], const int size, int max, int min)
{
	for (int i = 1; i < size; i++) 
	{
		if (max < arr[i]) max=arr[i];
		if (min > arr[i]) min=arr[i];
	}
	return 0;
}

#endif