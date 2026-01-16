#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

int main()
{
	queue<int> q = {};
	int m;

	cin >> m;

	for (int i = 1; i <= m; i++)
	{
		q.push(i);
	}

	for (int i = 0; i < m; i++)
	{
		if (q.size() != 1)
		{
			q.pop();
			q.push(q.front());
			q.pop();
		}
	}

	cout << q.front();
}