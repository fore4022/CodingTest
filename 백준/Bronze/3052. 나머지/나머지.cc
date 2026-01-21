#include<iostream>

using namespace std;

int sums[1001] = {};

int main()
{
	int n, cnt = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> n;

		sums[n % 42]++;
	}

	for (int i : sums)
	{
		if (i != 0)
		{
			cnt++;
		}
	}

	cout << cnt;
}