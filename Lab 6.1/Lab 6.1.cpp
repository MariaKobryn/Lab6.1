#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* ñ, const int n, const int Low, const int High)
{
	for (int i = 0; i < n; i++)
		ñ[i] = Low + rand() % (High - Low + 1);
}

void Print(int* ñ, const int n)
{
	for (int i = 0; i < n; i++)
		cout << setw(4) << ñ[i];
	cout << endl;
}

int Count(int* ñ, const int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		if (!(ñ[i] % 2 == 0 || i % 13 == 0))
		{
			count++;
		}
	}
	return count;
}

void Zero(int* ñ, const int n)
{
	for (int i = 0; i < n; i++)
		if (!(ñ[i] % 2 == 0 || i % 13 == 0))
			ñ[i] = 0;
}

int Sum(int* ñ, const int n)
{
	int S = 0;
	for (int i = 0; i < n; i++)
		if (!(ñ[i] % 2 == 0 || i % 13 == 0))
			S += ñ[i];
	return S;
}

int main()
{
	srand((unsigned)time(NULL));

	const int n = 21;
	int ñ[n];

	int Low = 15;
	int High = 85;

	Create(ñ, n, Low, High);
	Print(ñ, n);

	cout << "S = " << Sum(ñ, n) << endl;
	cout << "Count = " << Count(ñ, n) << endl;

	Zero(ñ, n);
	Print(ñ, n);

	return 0;
}
