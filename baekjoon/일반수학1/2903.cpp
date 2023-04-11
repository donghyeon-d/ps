#include <iostream>

int main()
{
	int n;
	std::cin >> n;

	int dot = 2;
	int gop = 1;

	for (int i = 0; i < n; i++)
	{
		dot += gop;
		gop *= 2;
	}
	std::cout << dot * dot << std::endl;
}