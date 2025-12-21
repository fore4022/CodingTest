#include<iostream>

using namespace std;

int main()
{
	int cnt, o;

	cin >> cnt;

	for (int i = 0; i < 9; i++)
	{
		cin >> o;

		cnt -= o;
	}

	cout << cnt;
}