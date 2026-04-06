#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int main()
{
	vector<int> result;
	stack<int> s, t, c;
	int n, m, k;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		switch (m)
		{
		case 1:
			cin >> k;

			s.push(k);
			c.push(m);

			break;
		case 2:
			t.push(s.top());
			s.pop();
			c.push(m);

			break;
		case 3:
			cin >> k;
			
			for (int j = 0; j < k; j++)
			{
				if (c.top() == 1)
				{
					s.pop();
				}
				else
				{
					s.push(t.top());
					t.pop();
				}

				c.pop();
			}

			break;
		case 4:
			result.push_back(s.size());
			
			break;
		case 5:
			if (s.empty())
			{
				result.push_back(-1);
			}
			else
			{
				result.push_back(s.top());
			}

			break;
		}
	}

	for (int i : result)
	{
		cout << i << '\n';
	}
}