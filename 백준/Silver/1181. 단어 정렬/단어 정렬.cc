#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

string strs[20001];

bool comp(string str1, string str2)
{
	if (str1.length() < str2.length())
	{
		return true;
	}
	else if(str1.length() > str2.length())
	{
		return false;
	}

	return str1 < str2;
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> strs[i];
	}

	sort(strs, strs + n, comp);

	for (int i = 0; i < n; i++)
	{
		if (strs[i].compare(strs[i + 1]) == 0)
		{
			continue;
		}

		cout << strs[i] << '\n';
	}
}