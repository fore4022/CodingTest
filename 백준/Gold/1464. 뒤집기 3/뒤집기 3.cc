#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<char> deque;
	string str;

	cin >> str;

	for (char c : str)
	{
		if (!deque.empty())
		{
			if (deque.back() > c)
			{
				if (deque.front() >= c)
				{
					deque.push_front(c);

					continue;
				}
			}
		}

		deque.push_back(c);
	}

	for (char c : deque)
	{
		cout << c;
	}
}