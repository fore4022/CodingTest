#include<iostream>

using namespace std;

int main()
{
	int n, m = 1, result = 1, temp;

	cin >> n;

	temp = n;

	while (temp > 1)
	{
		temp -= 6 * m;
		result++;
		m++;
	}

	cout << result;
}