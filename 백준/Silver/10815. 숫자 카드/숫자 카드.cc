#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
	map<int, int> map;
	vector<int> vec1, vec2;
	int o, num;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> num;

		vec1.push_back(num);
	}

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> num;

		vec2.push_back(num);
		map.insert({ num, 0 });
	}

	for (int i : vec1)
	{
		auto it = map.find(i);

		if (it != map.end())
		{
			it->second = 1;
		}
	}

	for (int i : vec2)
	{
		cout << map[i] << " ";
	}
}