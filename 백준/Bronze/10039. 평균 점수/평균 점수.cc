#include<iostream>

using namespace std;

int main()
{
	double o, cnt = 0;

	for (int i = 0; i < 5; i++)
	{
		cin >> o;

		if (o < 40)
		{
			o = 40;
		}

		cnt += o;
	}

	cout << cnt / 5;
}