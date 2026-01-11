#include<iostream>

using namespace std;

int main()
{
	int max = 0, index, n;

	for (int i = 1; i <= 9; i++)
	{
		cin >> n;

		if (n > max)
		{
			max = n;
			index = i;
		}
	}

	cout << max << '\n' << index;
}