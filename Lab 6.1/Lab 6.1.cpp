#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* �, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		�[i] = Low + rand() % (High - Low + 1);
}

void Print(int* �, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << �[i];
	cout << endl;
}

int Count(int* �, const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (!(�[i] % 2 == 0 || i % 13 == 0))
		{
			count++;
		}
	}
	return count;
}

void Zero(int* �, const int n)
{
	for (int i = 0; i < n; i++)
		if (!(�[i] % 2 == 0 || i % 13 == 0))
			�[i] = 0;
}

int Sum(int* �, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		if (!(�[i] % 2 == 0 || i % 13 == 0))
			S += �[i];
	return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int �[n];

	int Low = 15;
	int High = 85;

	Create(�, n, Low, High);
	Print(�, n);

	cout << "S = " << Sum(�, n) << endl;
	cout << "Count = " << Count(�, n) << endl;

	Zero(�, n);
	Print(�, n);

	return 0;
}
