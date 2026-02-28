#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> deque;
	int n, k, o, max = 0, cnt = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> o;

		cnt += o;

		deque.push_back(o);

		if (deque.size() > k)
		{
			cnt -= deque.front();

			deque.pop_front();
		}

		if (i == k)
		{
			max = cnt;
		}
		else if (cnt > max)
		{
			max = cnt;
		}
	}

	cout << max;
}