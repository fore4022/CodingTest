#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<string> vec;
	int n, o;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		vec.push_back("");

		for (int j = 0; j < o / 5; j++)
		{
			vec[i] += "++++ ";
		}

		for (int j = 0; j < o % 5; j++)
		{
			vec[i] += "|";
		}
	}

	for (string s : vec)
	{
		cout << s << '\n';
	}
}