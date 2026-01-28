#include<iostream>
#include<vector>
#include<queue>
#include<string>

using namespace std;

int main()
{
	vector<string> results;
	queue<int> queue;
	string str;
	int n, number;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (!str.compare("push"))
		{
			cin >> number;

			queue.push(number);
		}
		else if (!str.compare("pop"))
		{
			if (queue.size() != 0)
			{
				results.push_back(to_string(queue.front()));
				queue.pop();
			}
			else
			{
				results.push_back("-1");
			}
		}
		else if (!str.compare("size"))
		{
			results.push_back(to_string(queue.size()));
		}
		else if (!str.compare("empty"))
		{
			if (queue.size() == 0)
			{
				results.push_back("1");
			}
			else
			{
				results.push_back("0");
			}
		}
		else if (!str.compare("front"))
		{
			if (queue.size() != 0)
			{
				results.push_back(to_string(queue.front()));
			}
			else
			{
				results.push_back("-1");
			}
		}
		else if (!str.compare("back"))
		{
			if (queue.size() != 0)
			{
				results.push_back(to_string(queue.back()));
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