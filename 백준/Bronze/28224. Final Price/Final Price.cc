#include<iostream>

using namespace std;

int main()
{
	int cnt = 0, o, n;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> n;

		cnt += n;
	}

	cout << cnt;
}