#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	stack<int> temp;
	vector<int> vec;
	int n, m, num = 1;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		vec.push_back(m);
	}

	for (int i = 0; i < n; i++)
	{
		while (!temp.empty())
		{
			if (temp.top() == num)
			{
				num++;
				temp.pop();
			}
			else
			{
				break;
			}
		}

		if (num == vec[i])
		{
			num++;
		}
		else
		{
			temp.push(vec[i]);
		}
	}

	while (!temp.empty())
	{
		if (temp.top() == num)
		{
			num++;
			temp.pop();
		}
		else
		{
			break;
		}
	}

	if (temp.empty())
	{
		cout << "Nice";
	}
	else
	{
		cout << "Sad";
	}
}