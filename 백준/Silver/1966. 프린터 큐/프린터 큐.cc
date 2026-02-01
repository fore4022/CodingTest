#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int> vec;
	vector<int> result;
	int testcase, n, m, importance, cnt;
	bool hasGreater = false;
	
	cin >> testcase;
	
	for (int i = 0; i < testcase; i++)
	{
		cin >> n >> m;

		for (int j = 0; j < n; j++)
		{
			cin >> importance;

			if (j == m)
			{
				vec.push_back(-importance);
			}
			else
			{
				vec.push_back(importance);
			}
		}

		cnt = 0;

		while (true)
		{
			for (int j = 1; j < vec.size(); j++)
			{
				if (abs(vec.front()) < abs(vec[j]))
				{
					hasGreater = true;
					
					break;
				}
			}

			if (hasGreater)
			{
				vec.push_back(vec.front());
				vec.erase(vec.begin());
			}
			else
			{
				cnt++;

				if (vec.front() < 0)
				{
					break;
				}
				else
				{
					vec.erase(vec.begin());
				}
			}

			hasGreater = false;
		}

		vec = vector<int>();

		result.push_back(cnt);
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}