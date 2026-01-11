#include<iostream>

using namespace std;

int main()
{
	int cnt = 0, o = 1, m, n;

	cin >> m >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			if (o >= m && o <= n)
			{
				cnt += i;
			}

			o++;
		}
	}

	cout << cnt;
}