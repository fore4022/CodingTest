#include<iostream>

using namespace std;

int main()
{
	long long int n, m, l, gcd;

	cin >> n >> m;

	if (n > m)
	{
		l = m;
	}
	else
	{
		l = n;
	}

	for (int i = 1; i <= l; i++)
	{
		if (n % i == 0 && m % i == 0)
		{
			gcd = i;
		}
	}

	cout << n / gcd * m / gcd * gcd;
}