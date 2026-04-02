#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	vector<int> results;
	stack<char> s;
	string str;
	char temp;
	int r;

	while (true)
	{
		cin >> str;

		if (str[0] == '-')
		{
			break;
		}

		s = stack<char>();
		r = 0;

		for (char c : str)
		{
			switch (c)
			{
			case '{':
				s.push(c);

				break;
			case '}':
				if (!s.empty() && s.top() == '{')
				{
					s.pop();
				}
				else
				{
					s.push(c);
				}

				break;
			}
		}

		while (!s.empty())
		{
			temp = s.top();

			s.pop();

			if (s.top() == '{' || temp == '}')
			{
				r++;
			}
			else
			{
				r += 2;
			}

			s.pop();
		}

		results.push_back(r);
	}

	for (int i = 0; i < results.size(); i++)
	{
		cout << i + 1 << ". " << results[i] << '\n';
	}
}