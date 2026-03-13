#include<iostream>
#include<vector>
#include<utility>

using namespace std;

int main()
{
	vector<pair<int, int>> vec;
	int a, b, c, d;

	while (true)
	{
		cin >> a >> b >> c >> d;

		if (a == b && a == c && a == d && a == 0)
		{
			break;
		}

		vec.push_back({ c - b, d - a });
	}

	for (pair<int, int> p : vec)
	{
		cout << p.first << " " << p.second << '\n';
	}
}