#include<iostream>

using namespace std;

int main()
{
	int n, temp, cnt = 0;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		temp = i;

		while (temp % 5 == 0)
		{
			cnt++;
			temp /= 5;
		}
	}

	cout << cnt;
}