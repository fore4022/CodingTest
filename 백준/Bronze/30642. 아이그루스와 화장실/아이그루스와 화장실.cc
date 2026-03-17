#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str;
	int n, m;

	cin >> n >> str >> m;

	if (!str.compare("annyong"))
	{
		if (m % 2 == 1)
		{
			cout << m;
		}
		else
		{
			if (m + 1 <= n)
			{
				cout << m + 1;
			}
			else
			{
				cout << m - 1;
			}
		}
	}
	else if (!str.compare("induck"))
	{
		if (m % 2 == 0)
		{
			cout << m;
		}
		else
		{
			if (m + 1 <= n)
			{
				cout << m + 1;
			}
			else
			{
				cout << m - 1;
			}
		}
	}
}