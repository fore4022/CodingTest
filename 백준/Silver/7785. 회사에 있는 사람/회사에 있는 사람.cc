#include<iostream>
#include<map>

using namespace std;

int main()
{
	map<string, bool, greater<string>> map;
	string name, commuting;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> name >> commuting;

		auto it = map.find(name);

		if (it != map.end())
		{
			map.erase(it);
		}
		else
		{
			map.insert({ name, false });
		}
	}

	for (auto it : map)
	{
		cout << it.first << '\n';
	}
}