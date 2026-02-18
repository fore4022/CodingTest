#include<iostream>

using namespace std;

int main()
{
	int n, o, max = -1, min = 1001;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		if (min > o)
		{
			min = o;
		}

		if (max < o)
		{
			max = o;
		}
	}

	cout << max - min;
}