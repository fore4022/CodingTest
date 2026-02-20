#include<iostream>
#include<map>
#include<stack>

using namespace std;

int main()
{
	map<int, stack<bool>> record;
	int n, a, b, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;

		if (b == 0)
		{
			if (record[a].size() == 0)
			{
				result++;
			}
			else
			{
				record[a].pop();
			}
		}
		else
		{
			if (record[a].size() != 0)
			{
				result++;
			}
			else
			{
				record[a].push(1);
			}
		}
	} 

	for (auto it : record)
	{
		result += it.second.size();
	}

	cout << result;
}