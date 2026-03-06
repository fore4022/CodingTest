#include<iostream>

using namespace std;

int main()
{
	bool arr[30] = {};
	int o;

	for (int i = 0; i < 28; i++)
	{
		cin >> o;

		arr[o - 1] = true;
	}

	o = 0;

	for (bool b : arr)
	{
		o++;

		if (!b)
		{
			cout << o << '\n';
		}
	}
}