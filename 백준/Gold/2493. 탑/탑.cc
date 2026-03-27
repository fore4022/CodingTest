#include<iostream>
#include<vector>
#include<stack>
#include<utility>

using namespace std;

int main()
{
	stack<pair<int, int>> stack, temp;
	vector<int> result;
	int n, o;

	cin >> n;

	result.resize(n, 0);

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		stack.push({ o, i});
	}

	for (int i = 0; i < n; i++)
	{
		while (!temp.empty())
		{
			if (temp.top().first <= stack.top().first)
			{
				result[temp.top().second] = stack.top().second + 1;
				temp.pop();
			}
			else
			{
				break;
			}
		}

		temp.push(stack.top());
		stack.pop();
	}

	for (int i : result)
	{
		cout << i << " ";
	}
}