#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<vector<char>> vec;
	string str;
	int n;

	cin >> n;

	vec.resize(n);

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		for (char c : str)
		{
			if (vec[i].empty())
			{
				vec[i].push_back(c);
			}
			else if (vec[i].back() != c)
			{
				vec[i].push_back(c);
			}
		}
	}

	for (vector<char> v : vec)
	{
		for (char c : v)
		{
			cout << c;
		}

		cout << '\n';
	}
}