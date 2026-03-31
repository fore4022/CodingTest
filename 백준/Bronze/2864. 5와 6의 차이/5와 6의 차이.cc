#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	string a, b;
	int temp, min = 0 ,max = 0, index = 1;

	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	for (char c : a)
	{
		temp = c - '0';

		if (temp == 6)
		{
			temp = 5;
		}

		min += temp * index;
		index *= 10;
	}

	index = 1;

	for (char c : b)
	{
		temp = c - '0';

		if (temp == 6)
		{
			temp = 5;
		}

		min += temp * index;
		index *= 10;
	}

	index = 1;

	for (char c : a)
	{
		temp = c - '0';

		if (temp == 5)
		{
			temp = 6;
		}

		max += temp * index;
		index *= 10;
	}

	index = 1;

	for (char c : b)
	{
		temp = c - '0';

		if (temp == 5)
		{
			temp = 6;
		}

		max += temp * index;
		index *= 10;
	}

	cout << min << " " << max;
}