#include<iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m, l, gcd;

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

	cout << gcd << '\n';
	cout << n / gcd * m / gcd * gcd;
}