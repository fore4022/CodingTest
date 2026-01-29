#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<int> queue, result;
	int n, k, index;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		queue.push(i);
	}

	while (queue.size() != 0)
	{
		for (int i = 0; i < k - 1; i++)
		{
			queue.push(queue.front());
			queue.pop();
		}

		result.push(queue.front());
		queue.pop();
	}

	cout << "<";

	for (int i = 0; i < n; i++)
	{
		cout << result.front();

		result.pop();

		if (i != n - 1)
		{
			cout << ", ";
		}
	}

	cout << ">";
}