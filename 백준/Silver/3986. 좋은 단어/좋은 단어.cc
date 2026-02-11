#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<char> s;
	string str;
	int n, result = 0;

	cin >> n;
	
	for (int i = 0; i < n; i++)
	{
		cin >> str;

		for (char c : str)
		{
			if (s.size() == 0)
			{
				s.push(c);
			}
			else if (s.top() == c)
			{
				s.pop();
			}
			else
			{
				s.push(c);
			}
		}

		if (s.size() == 0)
		{
			result++;
		}

		s = stack<char>();
	}

	cout << result;
}