#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<char> vec;
	string str;
	int cnt = 0;

	cin >> str;

	for (char c : str)
	{
		if (c == '.')
		{
			if (cnt % 2 == 1)
			{
				cout << "-1";

				return 0;
			}
			else if (cnt > 0)
			{
				for (int j = 0; j < cnt / 4; j++)
				{
					vec.push_back('A');
					vec.push_back('A');
					vec.push_back('A');
					vec.push_back('A');
				}

				for (int j = 0; j < cnt % 4; j++)
				{
					vec.push_back('B');
				}
			}

			cnt = 0;

			vec.push_back('.');
		}
		else
		{
			cnt++;
		}
	}

	if (cnt % 2 == 1)
	{
		cout << "-1";

		return 0;
	}
	else if (cnt > 0)
	{
		for (int j = 0; j < cnt / 4; j++)
		{
			vec.push_back('A');
			vec.push_back('A');
			vec.push_back('A');
			vec.push_back('A');
		}

		for (int j = 0; j < cnt % 4; j++)
		{
			vec.push_back('B');
		}
	}

	cnt = 0;

	for (char c : vec)
	{
		cout << c;
	}
}