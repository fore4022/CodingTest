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

	map<string, int> pokedex;
	vector<string> strs, results;
	string str;
	int n, m, temp;
	bool isNumber = true;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> str;

		pokedex.insert({ str, i });
		strs.push_back(str);
	}

	for (int i = 0; i < m; i++)
	{
		cin >> str;

		if (!isdigit(str[0]))
		{
			isNumber = false;
		}
		else
		{
			isNumber = true;
		}

		if (isNumber)
		{
			temp = stoi(str) - 1;

			results.push_back(strs[temp]);
		}
		else
		{
			results.push_back(to_string(pokedex[str]));
		}
	}

	for (string s : results)
	{
		cout << s << '\n';
	}
}