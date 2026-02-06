#include<iostream>

using namespace std;

int number[100001] = { 0 }, result[100001] = { 0 };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, m, a, b, cnt = 0;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> a;

		cnt += a;
		number[i] = cnt;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> a >> b;

		if (a != b)
		{
			result[i] = number[b] - number[a - 1];
		}
		else
		{
			result[i] = number[a] - number[a - 1];
		}
	}

	for (int i = 0; i < m; i++)
	{
		cout << result[i] << '\n';
	}
}