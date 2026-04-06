#include<iostream>
#include<unordered_set>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	unordered_set<int> hasCd;
	int n, m, o, cnt;

	while (true)
	{
		cin >> n >> m;

		if (n == m && n == 0)
		{
			break;
		}

		cnt = 0;
		hasCd = unordered_set<int>();

		for (int i = 0; i < n; i++)
		{
			cin >> o;

			hasCd.insert(o);
		}

		for (int i = 0; i < m; i++)
		{
			cin >> o;

			if (hasCd.count(o) != 0)
			{
				cnt++;
			}
		}

		cout << cnt << '\n';
	}
}