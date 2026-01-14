#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<string> result;
	string str, temp;

	while (cin >> str)
	{
		if (str.compare("0") == 0)
		{
			break;
		}

		temp = str;

		reverse(temp.begin(), temp.end());

		if (str.compare(temp) == 0)
		{
			result.push_back("yes\n");
		}
		else
		{
			result.push_back("no\n");
		}
	}

	for (string s : result)
	{
		cout << s;
	}
}