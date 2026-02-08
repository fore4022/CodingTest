#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int> priorityQueue;
	vector<int> results;
	int n, x;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (x == 0)
		{
			if (priorityQueue.size() == 0)
			{
				results.push_back(0);
			}
			else
			{
				results.push_back(priorityQueue.top());
				priorityQueue.pop();
			}
		}
		else
		{
			priorityQueue.push(-x);
		}
	}

	for (int i : results)
	{
		cout << -i << '\n';
	}
}