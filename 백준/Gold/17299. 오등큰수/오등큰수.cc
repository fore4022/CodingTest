#include<iostream>
#include<vector>
#include<stack>
#include<utility>

using namespace std;

int arr[1000001] = {};

int main()
{
	vector<int> nums, result;
	stack<pair<int, int>> temp;
	int n, o, index = 0;

	cin >> n;

	result.resize(n, -1);

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		nums.push_back(o);
		arr[o]++;
	}

	for (int i : nums)
	{
		while (!temp.empty())
		{
			if (temp.top().first >= arr[i])
			{
				break;
			}

			result[temp.top().second] = i;

			temp.pop();
		}

		temp.push({ arr[i], index});
		index++;
	}

	for (int i : result)
	{
		cout << i << " ";
	}
}