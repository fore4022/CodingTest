#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<pair<char, int>> s;
	string str;
	int result = 0, temp = 0;
	bool isClosing = false;

	cin >> str;

	for (char c : str)
	{
		if (!s.empty())
		{
			if (s.top().first == '(' && c == ')')
			{
				temp = s.top().second * 2;
				isClosing = true;

				s.pop();
			}
			else if (s.top().first == '[' && c == ']')
			{
				temp = s.top().second * 3;
				isClosing = true;

				s.pop();
			}
			else
			{
				s.push({ c, 1 });
				isClosing = false;
			}

			if (s.empty())
			{
				result += temp;
			}
			else
			{
				if (isClosing)
				{
					if (s.top().second == 1)
					{
						s.top().second = temp;
					}
					else
					{
						s.top().second += temp;
					}
				}
			}
		}
		else
		{
			s.push({ c, 1 });
		}
	}

	if (s.empty())
	{
		cout << result;
	}
	else
	{
		cout << "0";
	}
}