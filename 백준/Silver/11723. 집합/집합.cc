#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int arr[21] = {};
	int n, x;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (!str.compare("add"))
		{
			cin >> x;

			arr[x] = 1;
		}
		else if (!str.compare("remove"))
		{
			cin >> x;

			arr[x] = 0;
		}
		else if (!str.compare("check"))
		{
			cin >> x;

			cout << (arr[x] == 1 ? 1 : 0) << '\n';
		}
		else if (!str.compare("toggle"))
		{
			cin >> x;

			if (arr[x] == 1)
			{
				arr[x] = 0;
			}
			else
			{
				arr[x] = 1;
			}
		}
		else if (!str.compare("all"))
		{
			for (int j = 1; j <= 20; j++)
			{
				arr[j] = 1;
			}
		}
		else if (!str.compare("empty"))
		{
			for (int j = 1; j <= 20; j++)
			{
				arr[j] = 0;
			}
		}
	}
}