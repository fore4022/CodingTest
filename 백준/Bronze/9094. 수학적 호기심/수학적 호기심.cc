#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	int o, n, m, cnt;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> n >> m;

		cnt = 0;

		for (int j = 1; j < n; j++)
		{
			for (int k = j + 1; k < n; k++)
			{
				if (((j * j + k * k + m) % (j * k)) == 0)
				{
					cnt++;
				}
			}
		}

		vec.push_back(cnt);
	}

	for (int i : vec)
	{
		cout << i << '\n';
	}
}