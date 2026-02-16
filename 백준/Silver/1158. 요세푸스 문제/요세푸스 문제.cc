#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	vector<int> result;
	list<int> list;
	int n, m;

	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		list.push_back(i);
	}

	auto it = list.begin();

	while (!list.empty())
	{
		for (int i = 0; i < m - 1; i++)
		{
			++it;

			if (it == list.end())
			{
				it = list.begin();
			}
		}

		result.push_back(*it);

		it = list.erase(it);

		if (it == list.end())
		{
			it = list.begin();
		}
	}

	cout << "<";

	for (int i = 0; i < n; i++)
	{
		cout << result[i];

		if (i != n - 1)
		{
			cout << ", ";
		}
	}

	cout << ">";
}