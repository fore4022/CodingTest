#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	vector<char> result;
	stack<char> s;
	string str;

	cin >> str;

	for (char c : str)
	{
		if (c >= 'A' && c <= 'Z')
		{
			result.push_back(c);
		}

		switch (c)
		{
		case '+':
		case '-':
			while (!s.empty())
			{
				if (s.top() == '(')
				{
					break;
				}

				if ((s.top() == '+' || s.top() == '-'))
				{
					result.push_back(s.top());
					s.pop();

					break;
				}

				result.push_back(s.top());
				s.pop();
			}

			s.push(c);

			break;
		case '/':
		case '*':
			while (!s.empty())
			{
				if (s.top() == '+' || s.top() == '-' || s.top() == '(')
				{
					break;
				}

				result.push_back(s.top());
				s.pop();
			}

			s.push(c);

			break;
		case '(':
			s.push(c);

			break;
		case ')':
			if (!s.empty())
			{
				while (s.top() != '(')
				{
					result.push_back(s.top());
					s.pop();
				}

				s.pop();
			}

			break;
		}
	}

	while (!s.empty())
	{
		if (s.top() != '(')
		{
			result.push_back(s.top());
		}

		s.pop();
	}

	for (char c : result)
	{
		cout << c;
	}
}