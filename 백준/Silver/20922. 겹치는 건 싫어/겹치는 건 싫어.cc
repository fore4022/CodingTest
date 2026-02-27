#include<iostream>
#include<deque>
#include<map>

using namespace std;

int main()
{
	deque<int> queue;
	map<int, int> cumulative;
	int n, m, o, cnt = 0, max = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		cumulative[o]++;
		cnt++;

		queue.push_back(o);

		while (cumulative[o] > m)
		{
			cumulative[queue.front()]--;
			cnt--;

			queue.pop_front();
		}

		if (cnt > max)
		{
			max = cnt;
		}
	}

	if (cnt > max)
	{
		max = cnt;
	}

	cout << max;
}