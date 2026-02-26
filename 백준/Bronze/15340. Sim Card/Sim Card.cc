#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> results;
	int a, b, min;

	while (cin >> a >> b)
	{
		if (a == 0 && b == 0)
		{
			break;
		}

		min = a * 30 + b * 40;

		if (a * 35 + b * 30 < min)
		{
			min = a * 35 + b * 30;
		}

		if (a * 40 + b * 20 < min)
		{
			min = a * 40 + b * 20;
		}

		results.push_back(min);
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}