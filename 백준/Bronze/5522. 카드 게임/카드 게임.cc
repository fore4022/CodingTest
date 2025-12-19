#include<iostream>

using namespace std;

int main()
{
	int o, cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> o;

		cnt += o;
	}

	cout << cnt;
}