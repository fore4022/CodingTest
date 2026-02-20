#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<int> deque;
	int n, a, b, index = 0, max = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		if (a == 1)
		{
			cin >> b;

			deque.push_back(b);

			if (max < deque.size())
			{
				max = deque.size();
				index = deque.back();
			}
			else if(max == deque.size() && index > deque.back())
			{
				index = deque.back();
			}
		}
		else if(deque.size() != 0)
		{
			deque.pop_front();
		}
	}

	cout << max << " " << index;
}