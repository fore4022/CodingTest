#include<iostream>

using namespace std;

int main()
{
	string str;
	int cnt = 0;

	cin >> str;

	for (char c : str)
	{
		if (c == ',')
		{
			cnt++;
		}
	}

	cout << cnt + 1;
}