#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main()
{
	vector<int> results;
	multiset<int, greater<int>> s;
	int n, m, k, a, b, remaing;

	cin >> n;

	results.resize(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> m >> k;

		remaing = m;
		s = multiset<int, greater<int>>();

		for (int j = 0; j < k; j++)
		{
			cin >> a >> b;

			s.insert(a * b);
		}

		for (int j : s)
		{
			if (remaing <= 0)
			{
				break;
			}

			remaing -= j;
			results[i]++;
		}
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}