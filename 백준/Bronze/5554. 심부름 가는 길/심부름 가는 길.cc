#include<iostream>

using namespace std;

int main()
{
	int cnt = 0, o;

	for (int i = 0; i < 4; i++)
	{
		cin >> o;

		cnt += o;
	}

	cout << cnt / 60 << '\n' << cnt % 60;
}