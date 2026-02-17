#include<iostream>
#include<set>

using namespace std;

int main()
{
	multiset<int> ms;
	int n, a, b, c, temp, result = -1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		ms = {};
		temp = 0;

		cin >> a >> b;

		temp += a >= b ? a : b;

		for (int j = 0; j < 5; j++)
		{
			cin >> c;

			ms.insert(c);
		}

		temp += *ms.rbegin() + *next(ms.rbegin());

		if (temp > result)
		{
			result = temp;
		}
	}

	cout << result;
}