#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> deque, result;
	string str;
	int o, n;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> str;

		if (!str.compare("push_front"))
		{
			cin >> n;

			deque.push_front(n);
		}
		else if (!str.compare("push_back"))
		{
			cin >> n;

			deque.push_back(n);
		}
		else if (!str.compare("pop_front"))
		{
			if (deque.size() != 0)
			{
				n = deque.front();

				deque.pop_front();
				result.push_back(n);
			}
			else
			{
				result.push_back(-1);
			}
		}
		else if (!str.compare("pop_back"))
		{
			if (deque.size() != 0)
			{
				n = deque.back();

				deque.pop_back();
				result.push_back(n);
			}
			else
			{
				result.push_back(-1);
			}
		}
		else if (!str.compare("size"))
		{
			result.push_back(deque.size());
		}
		else if (!str.compare("empty"))
		{
			if (deque.size() == 0)
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
			if (deque.size() != 0)
			{
				result.push_back(deque.front());
			}
			else
			{
				result.push_back(-1);
			}
		}
		else if (!str.compare("back"))
		{
			if (deque.size() != 0)
			{
				result.push_back(deque.back());
			}
			else
			{
				result.push_back(-1);
			}
		}
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}