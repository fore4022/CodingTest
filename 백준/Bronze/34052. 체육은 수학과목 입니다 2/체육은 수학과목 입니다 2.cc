#include<iostream>

using namespace std;

int main()
{
	int o, cnt = 300;

	for (int i = 0; i < 4; i++)
	{
		cin >> o;

		cnt += o;
	}

	cout << (cnt <= 1800 ? "Yes" : "No");
}