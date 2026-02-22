#include<iostream>
#include<deque>
#include<vector>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	deque<int> deque;
	vector<int> result;
	int m, n, o;

	cin >> m;

	for (int i = 0; i < m; i++)
	{
		cin >> n;

		switch (n)
		{
		case 1:
			cin >> o;
			deque.push_front(o);

			break;
		case 2:
			cin >> o;
			deque.push_back(o);

			break;

		case 3:
			if (deque.size() != 0)
			{
				result.push_back(deque.front());
				deque.pop_front();
			}
			else
			{
				result.push_back(-1);
			}

			break;
		case 4:
			if (deque.size() != 0)
			{
				result.push_back(deque.back());
				deque.pop_back();
			}
			else
			{
				result.push_back(-1);
			}

			break;
		case 5 :
			result.push_back(deque.size());

			break;
		case 6:
			if (deque.size() == 0)
			{
				result.push_back(1);
			}
			else
			{
				result.push_back(0);
			}

			break;
		case 7:
			if (deque.size() != 0)
			{
				result.push_back(deque.front());
			}
			else
			{
				result.push_back(-1);
			}

			break;
		case 8:
			if (deque.size() != 0)
			{
				result.push_back(deque.back());
			}
			else
			{
				result.push_back(-1);
			}

			break;
		}
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}