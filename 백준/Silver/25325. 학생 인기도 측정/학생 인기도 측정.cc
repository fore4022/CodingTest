#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<map>
#include<utility>
#include<algorithm>

using namespace std;

int comp(pair<string, int> a, pair<string, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}

	return a.second > b.second;
}

int main()
{
	map<string, int> map;
	vector<pair<string, int>> result;
	vector<string> vec;
	stringstream ss;
	string s, word;
	int n;

	cin >> n;

	cin.ignore();

	for (int i = 0; i <= n; i++)
	{
		getline(cin, s);
		ss.clear();
		ss.str(s);

		while (ss >> word)
		{
			if (i == 0)
			{
				vec.push_back(word);
				map.insert({ word, 0 });
			}
			else if(vec[i - 1] != word)
			{
				map[word]++;
			}
		}
	}

	result.insert(result.end(), map.begin(), map.end());

	sort(result.begin(), result.end(), comp);

	for (auto it : result)
	{
		cout << it.first << " " << it.second << '\n';
	}
}