#include<iostream>
#include<climits>

using namespace std;

int main()
{
	int t = 0, a, min = INT_MAX, max = INT_MIN;

	cin >> t;

	for (int i = 0; i < t; i++)
	{
		cin >> a;

		if (a < min)
		{
			min = a;
		}

		if (a > max)
		{
			max = a;
		}
	}

	cout << min * max;
}