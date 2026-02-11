#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	vector<int> result;
	stack<int> stack;
	int n, a, b;
	
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;

		switch (a)
		{
		case 1:
			cin >> b;

			stack.push(b);

			break;
		case 2:
			if (stack.size() != 0)
			{
				result.push_back(stack.top());
				stack.pop();
			}
			else
			{
				result.push_back(-1);
			}

			break;
		case 3:
			result.push_back(stack.size());

			break;
		case 4:
			if (stack.size() == 0)
			{
				result.push_back(1);
			}
			else
			{
				result.push_back(0);
			}

			break;
		case 5:
			if (stack.size() == 0)
			{
				result.push_back(-1);
			}
			else
			{
				result.push_back(stack.top());
			}

			break;
		}
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}