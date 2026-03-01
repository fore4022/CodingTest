#include<iostream>
#include<stack>

using namespace std;


int main()
{
	stack<char> s1, s2;
	char c;
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c;

		if (c >= '1' && c <= '9')
		{
			cnt++;
		}
		else if (c == 'L')
		{
			s1.push(c);
		}
		else if (c == 'S')
		{
			s2.push(c);
		}
		else if (c == 'R')
		{
			if (s1.empty())
			{
				break;
			}
			else
			{
				cnt++;

				s1.pop();
			}
		}
		else if (c == 'K')
		{
			if (s2.empty())
			{
				break;
			}
			else
			{
				cnt++;

				s2.pop();
			}
		}
	}

	cout << cnt;
}