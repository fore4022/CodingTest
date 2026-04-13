#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
	vector<bool> results;
	map<char, int> mp, temp;
	string str;
	int n, m;
	bool result;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str >> m;

		mp = map<char, int>();

		for (char c : str)
		{
			mp[c]++;
		}

		for (int j = 0; j < m; j++)
		{
			cin >> str;

			temp = map<char, int>();
			result = true;

			for (char c : str)
			{
				temp[c]++;
			}

			for (char c : str)
			{
				if (mp[c] < temp[c])
				{
					result = false;

					break;
				}
			}

			results.push_back(result);
		}
	}

	for (bool b : results)
	{
		cout << (b ? "YES" : "NO") << '\n';
	}
}