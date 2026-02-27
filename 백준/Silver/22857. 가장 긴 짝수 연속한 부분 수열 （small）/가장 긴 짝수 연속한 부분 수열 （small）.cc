#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> queue;
	int n, m, o, cnt = 0, sequenceCnt = 0, max = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		queue.push_back(o);

		if (o % 2 == 1)
		{
			sequenceCnt++;
		}
		else
		{
			cnt++;
		}

		while (sequenceCnt > m)
		{
			if (queue.front() % 2 == 1)
			{
				sequenceCnt--;
			}
			else
			{
				cnt--;
			}

			queue.pop_front();
		}

		if (cnt > max)
		{
			max = cnt;
		}
	}

	cout << max;
}