#include<iostream>
#include<vector>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	map<string, pair<int, bool>> scoreMap;
	vector<int> scores;
	string str;
	int n, m, k, o, min = 0, max = 0;

	cin >> n >> m >> k;

	for (int i = 0; i < n; i++)
	{
		cin >> str >> o;

		scoreMap[str] = { o, false };
	}

	for (int i = 0; i < k; i++)
	{
		cin >> str;

		scoreMap[str].second = true;
	}

	for (auto it : scoreMap)
	{
		if (!it.second.second)
		{
			scores.push_back(it.second.first);
		}
		else
		{
			min += it.second.first;
		}
	}

	max = min;

	sort(scores.begin(), scores.end());

	for (int i = 0; i < m - k; i++)
	{
		min += scores[i];
		max += scores[scores.size() - 1 - i];
	}

	cout << min << " " << max;
}