#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> results;
	string str, temp;
	int n;

	cin >> n;

	cin.ignore();
	results.resize(n, "");

	for (int i = 0; i < n; i++)
	{
		getline(cin, str);

		temp = "";

		for (char c : str)
		{
			if (c == ' ')
			{
				for (int j = temp.size() - 1; j >= 0; j--)
				{
					results[i] += temp[j];
				}

				temp = "";
				results[i] += " ";
			}
			else
			{
				temp += c;
			}
		}

		for (int j = temp.size() - 1; j >= 0; j--)
		{
			results[i] += temp[j];
		}
	}

	for (string s : results)
	{
		cout << s << '\n';
	}
}