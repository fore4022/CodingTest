#include<iostream>

using namespace std;

int main()
{
	int max = -1000001, min = 1000001, o, n;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> n;

		if (n > max)
		{
			max = n;
		}

		if (n < min)
		{
			min = n;
		}
	}

	cout << min << " " << max;
}