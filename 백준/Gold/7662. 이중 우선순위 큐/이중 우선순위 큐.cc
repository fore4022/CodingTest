#include<iostream>
#include<vector>
#include<set>
#include<string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	multiset<int> set;
	vector<string> results;
	char str;
	int n, m, num;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		for (int j = 0; j < m; j++)
		{
			cin >> str >> num;

			if (str == 'I')
			{
				set.insert(num);
			}
			else
			{
				if (set.size() != 0)
				{
					if (num == 1)
					{
						set.erase(prev(set.end()));
					}
					else
					{
						set.erase(set.begin());
					}
				}
			}
		}

		if (set.size() == 0)
		{
			results.push_back("EMPTY");
		}
		else
		{
			results.push_back(to_string(*set.rbegin()) + " " + to_string(*set.begin()));
		}

		set = multiset<int>();
	}

	for (string s : results)
	{
		cout << s << '\n';
	}
}