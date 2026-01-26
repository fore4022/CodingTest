#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)
{
	if (p1.second == p2.second)
	{
		return p1.first < p2.first;
	}
	else
	{
		return p1.second < p2.second;
	}
}

int main()
{
	vector<pair<int, int>> coordinates;
	int n, x, y;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;

		coordinates.push_back(make_pair(x, y));
	}

	sort(coordinates.begin(), coordinates.end(), comp);

	for (pair<int, int> p : coordinates)
	{
		cout << p.first << " " << p.second << '\n';
	}
}