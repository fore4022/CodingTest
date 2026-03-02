#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, int> map;
	int n, m, o, cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		map[o]++;
	}

	for (int j = 0; j < m; j++)
	{
		cin >> o;

		map[o]++;
	}

	for (auto it : map)
	{
		if (it.second == 2)
		{
			cnt++;
		}
	}

	cout << n + m - cnt * 2;
}