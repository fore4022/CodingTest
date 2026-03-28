#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	long long result = 1;
	int n;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		result = result * i;

		while (result % 10 == 0)
		{
			result /= 10;
		}

		result %= 1000000000000;
	}

	cout << setw(5) << setfill('0') << result % 100000;
}