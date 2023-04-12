#include <iostream>

using namespace std;

int	GiveChange(int& remainder, int unit)
{
	int count = 0;
	while (remainder >= unit)
	{
		remainder -= unit;
		count++;
	}
	return count;
}

int main()
{
	int Q = 0, D = 0, N = 0, P = 0;
	int Remainder = 0;
	int T = 0;

	cin >> T;

	while (T--)
	{
		cin >> Remainder;
		Q = GiveChange(Remainder, 25);
		D = GiveChange(Remainder, 10);
		N = GiveChange(Remainder, 5);
		P = GiveChange(Remainder, 1);
		cout << Q << " " << D << " " << N << " " << P << endl;
	}
}