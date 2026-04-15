#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<int> s;
	long long cnt = 0;
	int n, o;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		while (true)
		{
			if (s.empty())
			{
				s.push(o);

				break;
			}
			else if (s.top() > o)
			{
				s.push(o);

				break;
			}
			else if (s.top() == o)
			{
				cnt += (s.size() - 1);
				
				break;
			}
			else
			{
				s.pop();

				cnt += s.size();
			}
		}
	}

	for (int i = s.size() - 1; i >= 1; i--)
	{
		cnt += i;
	}

	cout << cnt;
}