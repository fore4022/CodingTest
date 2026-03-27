#include<iostream>
#include<vector>
#include<stack>
#include<utility>

using namespace std;

int main()
{
	vector<int> result;
	stack<pair<int, int>> temp;
	int n, o;

	cin >> n;

	result.resize(n, -1);

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		while (!temp.empty())
		{
			if (temp.top().first >= o)
			{
				break;
			}

			result[temp.top().second] = o;

			temp.pop();
		}

		temp.push({ o, i });
	}

	for (int i : result)
	{
		cout << i << " ";
	}
}