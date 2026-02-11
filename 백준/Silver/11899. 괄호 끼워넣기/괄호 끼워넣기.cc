#include<iostream>
#include<stack>

using namespace std;

int main()
{
	stack<char> s;
	string str;

	cin >> str;
	
	for (char c : str)
	{
		if (s.size() == 0)
		{
			s.push(c);
		}
		else if (s.top() == '(' && c == ')')
		{
			s.pop();
		}
		else
		{
			s.push(c);
		}
	}

	cout << s.size();
}