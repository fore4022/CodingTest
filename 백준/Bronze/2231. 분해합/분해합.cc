#include<iostream>

using namespace std;

int main()
{
	int n, m, temp, result = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		temp = m = i;

		while (temp > 0)
		{
			m += temp % 10;
			temp /= 10;
		}
		
		if (m == n)
		{
			result = i;

			break;
		}
	}

	cout << result;
}