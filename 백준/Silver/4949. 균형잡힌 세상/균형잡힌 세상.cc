#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main()
{
	vector<bool> results;
	stack<int> temp;
	string str;

	while (getline(cin, str))
	{
		if (!str.compare("."))
		{
			break;
		}

		results.push_back(true);

		for (char c : str)
		{
			if (c == '(')
			{
				temp.push(1);
			}
			else if (c == '[')
			{
				temp.push(2);
			}
			
			if (c == ')')
			{
				if(temp.size() == 0)
				{
					results.back() = false;
					
					break;
				}
				else if (temp.top() != 1)
				{
					results.back() = false;

					break;
				}
				else
				{
					temp.pop();
				}
			}
			else if (c == ']')
			{
				if (temp.size() == 0)
				{
					results.back() = false;

					break;
				}
				else if (temp.top() != 2)
				{
					results.back() = false;

					break;
				}
				else
				{
					temp.pop();
				}
			}
		}

		if (temp.size() != 0)
		{
			results.back() = false;
		}

		temp = stack<int>();
	}

	for (bool b : results)
	{
		if (b)
		{
			cout << "yes";
		}
		else
		{
			cout << "no";
		}

		cout << '\n';
	}
}