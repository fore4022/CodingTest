#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str[1001];
	int n, count[1001];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> count[i] >> str[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < str[i].length(); j++)
		{
			for (int k = 0; k < count[i]; k++)
			{
				cout << str[i].at(j);
			}
		}

		cout << '\n';
	}
}