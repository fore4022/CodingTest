#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<string> results;
	string str;
	int cnt;

	while (true)
	{
		cin >> str;

		if (!str.compare("#"))
		{
			break;
		}

		cnt = 0;
		
		for (char c : str)
		{
			if (c == '1')
			{
				cnt++;
			}
			else if ((c == 'e' && cnt % 2 == 0) || (c == 'o' && cnt % 2 == 1))
			{
				results.push_back(str.substr(0, str.length() - 1) + "0");
			}
			else if ((c == 'e' && cnt % 2 != 0) || (c == 'o' && cnt % 2 != 1))
			{
				results.push_back(str.substr(0, str.length() - 1) + "1");
			}
		}
	}

	for (string s : results)
	{
		cout << s << '\n';
	}
}