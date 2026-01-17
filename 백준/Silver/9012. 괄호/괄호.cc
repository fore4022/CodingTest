#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<bool> results;
	string str;
	int n, temp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		temp = 0;

		for (int j = 0; j < str.size(); j++)
		{
			if (str[j] == '(')
			{
				temp++;
			}
			else if (str[j] == ')')
			{
				temp--;
			}

			if (temp == -1)
			{
				break;
			}
		}

		if (temp == 0)
		{
			results.push_back(true);
		}
		else
		{
			results.push_back(false);
		}
	}

	for (bool b : results)
	{
		if (b)
		{
			cout << "YES" << '\n';
		}
		else
		{
			cout << "NO" << '\n';
		}
	}
}