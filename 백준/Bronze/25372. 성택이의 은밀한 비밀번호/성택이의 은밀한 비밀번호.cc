#include<iostream>

using namespace std;

int main()
{
	string str;
	int n;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (str.length() >= 6 && str.length() <= 9)
		{
			cout << "yes";
		}
		else
		{
			cout << "no";
		}

		cout << '\n';
	}
}