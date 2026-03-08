#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<char> s;
	string str;
	int n, countB = 0, countR = 0;

	cin >> n >> str;

	for (char c : str)
	{
		if (s.empty())
		{
			s.push(c);

			if (s.top() == 'B')
			{
				countB++;
			}
			else
			{
				countR++;
			}
		}
		else
		{
			if (c != s.top())
			{
				if (c == 'B')
				{
					countB++;
				}
				else
				{
					countR++;
				}

				s.push(c);
			}
		}
	}

	if (countB == 0 || countR == 0)
	{
		cout << "1";
	}
	else if (countB == countR)
	{
		if (s.size() == 2)
		{
			cout << "2";
		}
		else
		{
			cout << countB + 1;
		}
	}
	else
	{
		cout << 1 + min(countB, countR);
	}
}