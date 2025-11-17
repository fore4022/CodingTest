#include<iostream>

using namespace std;

int result[1000001];

int main()
{
	int n, m;

	cin >> n >> m;

	if (n == 1)
	{
		n = 2;
	}

	for (int i = 2; i <= 1000000; i++)
	{
		for (int j = i; j <= 1000000; j += i)
		{
			result[j] += i;
		}
	}

	for (int i = n; i <= m; i++)
	{
		if (result[i] == i)
		{
			cout << i << '\n';
		}
	}
}