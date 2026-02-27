#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
	map<string, int> map;
	vector<string> words;
	string str;
	int n, m, cnt = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		words.push_back(str);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;

		map[str]++;
	}

	for (string s : words)
	{
		cnt += map[s];
	}

	cout << cnt;
}