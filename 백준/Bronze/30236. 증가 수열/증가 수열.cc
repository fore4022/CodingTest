#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> results;
	int n, m, o, r;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		r = 0;

		for (int j = 0; j < m; j++)
		{
			cin >> o;

			if (j == 0)
			{
				if (o == 1)
				{
					r = 2;
				}
				else
				{
					r = 1;
				}
			}
			else if (r + 1 != o)
			{
				r++;
			}
			else
			{
				r = o + 1;
			}
		}

		results.push_back(r);
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}