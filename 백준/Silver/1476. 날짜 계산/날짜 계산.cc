#include<iostream>

using namespace std;

int main()
{
	int e, s, m, i = 1, j = 1, k = 1, cnt = 1;

	cin >> e >> s >> m;

	while (e != i || s != j || m != k)
	{
		if (cnt % 15 == 0)
		{
			i = 1;
		}
		else
		{
			i++;
		}

		if (cnt % 28 == 0)
		{
			j = 1;
		}
		else
		{
			j++;
		}

		if (cnt % 19 == 0)
		{
			k = 1;
		}
		else
		{
			k++;
		}

		cnt++;
	}

	cout << cnt;
}