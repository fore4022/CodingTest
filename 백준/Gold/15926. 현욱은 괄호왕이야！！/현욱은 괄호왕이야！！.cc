#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	vector<int> nums;
	stack<pair<char, int>> s;
	string str;
	int n, index = 0, cnt = 0, result = 0;

	cin >> n >> str;

	nums.resize(n, 0);

	for (char c : str)
	{
		if (c == '(')
		{
			s.push({c, index});
		}
		else if (c == ')')
		{
			if (!s.empty())
			{
				if (s.top().first == '(')
				{
					nums[s.top().second] = nums[index] = 1;

					s.pop();
				}
			}
		}

		index++;
	}

	for (int i : nums)
	{
		if (i == 0)
		{
			cnt = 0;
		}
		else
		{
			cnt++;

			result = max(result, cnt);
		}
	}

	cout << result;
}