#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, string> note;
	vector<string> results;
	string str, site, password;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> site >> password;

		note.insert({ site, password });
	}

	for (int i = 0; i < m; i++)
	{
		cin >> site;

		results.push_back(note[site]);
	}

	for (string s : results)
	{
		cout << s << '\n';
	}
}