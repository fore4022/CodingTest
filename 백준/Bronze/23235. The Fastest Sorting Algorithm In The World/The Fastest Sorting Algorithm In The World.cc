#include<iostream>

using namespace std;

int main()
{
	int n, o, cnt = 0;

	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}

		cnt++;

		for (int i = 0; i < n; i++)
		{
			cin >> o;
		}
	}

	for (int i = 1; i <= cnt; i++)
	{
		cout << "Case " << i << ": Sorting... done!" << '\n';
	}
}