#include<iostream>
#include<queue>
#include<vector>
#include<string>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int> result;
	queue<int> queue;
	string str;
	int n, k;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (!str.compare("push"))
		{
			cin >> k;

			queue.push(k);
		}
		else if (!str.compare("pop"))
		{
			if (queue.size() == 0)
			{
				result.push_back(-1);
			}
			else
			{
				result.push_back(queue.front());
				queue.pop();
			}
		}
		else if (!str.compare("size"))
		{
			result.push_back(queue.size());
		}
		else if (!str.compare("empty"))
		{
			if (queue.size() == 0)
			{
				result.push_back(1);
			}
			else
			{
				result.push_back(0);
			}
		}
		else if (!str.compare("front"))
		{
			if (queue.size() == 0)
			{
				result.push_back(-1);
			}
			else
			{
				result.push_back(queue.front());
			}
		}
		else if (!str.compare("back"))
		{
			if (queue.size() == 0)
			{
				result.push_back(-1);
			}
			else
			{
				result.push_back(queue.back());
			}
		}
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}