#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> results;
	int o, h, w, n, result;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		result = 0;

		cin >> h >> w >> n;

		if (h == 1)
		{
			result += 100 + n;
		}
		else if (n % h == 0)
		{
			result += h * 100;
			result += (n / h);
		}
		else
		{
			result += (n % h) * 100;
			result += (n / h) + 1;
		}

		results.push_back(result);
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}