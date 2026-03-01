#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<int, bool> map;
	int n, m, o, cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		map[o] = false;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> o;
		
		auto it = map.find(o);

		if (it != map.end())
		{
			cnt++;

			it->second = true;
		}
	}

	cout << n - cnt << '\n';

	for (auto it : map)
	{
		if (!it.second)
		{
			cout << it.first << " ";
		}
	}
}