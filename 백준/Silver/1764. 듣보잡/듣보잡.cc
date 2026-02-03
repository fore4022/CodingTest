#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<cctype>
#include<algorithm>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, bool> list;
	string str;
	int n, m, cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		list.insert({ str, false });
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;

		if (list.find(str) != list.end())
		{
			list[str] = true;
			cnt++;
		}
	}

	cout << cnt << '\n';

	for (auto m : list)
	{
		if (m.second)
		{
			cout << m.first << '\n';
		}
	}
}