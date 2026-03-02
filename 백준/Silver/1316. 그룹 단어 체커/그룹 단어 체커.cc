#include<iostream>
#include<map>
#include<stack>

using namespace std;

int main()
{
	map<char, bool> m;
	stack<char> s;
	string str;
	int n, result;

	cin >> n;

	result = n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		s = stack<char>();
		m = map<char, bool>();

		for (char c : str)
		{
			if (s.empty())
			{
				m[c] = false;
			}
			else if (m[c])
			{
				result--;

				break;
			}
			else if (s.top() != c)
			{
				m[s.top()] = true;
				m[c] = false;
			}

			s.push(c);
		}
	}

	cout << result;
}