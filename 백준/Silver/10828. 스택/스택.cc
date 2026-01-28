#include<iostream>
#include<vector>
#include<stack>
#include<string>

using namespace std;

int main()
{
	vector<string> results;
	stack<int> stack;
	string str;
	int n, number;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (!str.compare("push"))
		{
			cin >> number;

			stack.push(number);
		}
		else if (!str.compare("pop"))
		{
			if (stack.size() != 0)
			{
				results.push_back(to_string(stack.top()));
				stack.pop();
			}
			else
			{
				results.push_back("-1");
			}
		}
		else if (!str.compare("size"))
		{
			results.push_back(to_string(stack.size()));
		}
		else if (!str.compare("empty"))
		{
			if (stack.size() == 0)
			{
				results.push_back("1");
			}
			else
			{
				results.push_back("0");
			}
		}
		else if (!str.compare("top"))
		{
			if (stack.size() != 0)
			{
				results.push_back(to_string(stack.top()));
			}
			else
			{
				results.push_back("-1");
			}
		}
	}
	
	for (string s : results)
	{
		cout << s << '\n';
	}
}