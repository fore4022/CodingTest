#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main()
{
	priority_queue<int> negativePriorityQueue, positivePriorityQueue;
	vector<int> results;
	int n, x;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (x == 0)
		{
			if (negativePriorityQueue.size() != 0 && positivePriorityQueue.size() == 0)
			{
				results.push_back(negativePriorityQueue.top());
				negativePriorityQueue.pop();
			}
			else if (negativePriorityQueue.size() == 0 && positivePriorityQueue.size() != 0)
			{
				results.push_back(-positivePriorityQueue.top());
				positivePriorityQueue.pop();
			}
			else if (negativePriorityQueue.size() != 0 && positivePriorityQueue.size() != 0)
			{
				if (-negativePriorityQueue.top() > -positivePriorityQueue.top())
				{
					results.push_back(-positivePriorityQueue.top());
					positivePriorityQueue.pop();
				}
				else if (-negativePriorityQueue.top() < -positivePriorityQueue.top())
				{
					results.push_back(negativePriorityQueue.top());
					negativePriorityQueue.pop();
				}
				else if (negativePriorityQueue.top() == positivePriorityQueue.top())
				{
					results.push_back(negativePriorityQueue.top());
					negativePriorityQueue.pop();
				}
			}
			else
			{
				results.push_back(0);
			}
		}
		else
		{
			if (x < 0)
			{
				negativePriorityQueue.push(x);
			}
			else
			{
				positivePriorityQueue.push(-x);
			}
		}
	}

	for (int i : results)
	{
		cout << i << '\n';
	}
}