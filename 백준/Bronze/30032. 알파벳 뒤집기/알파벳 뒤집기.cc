#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<string> vec;
	string str;
	int n, m;
	
	cin >> n >> m;

	vec.resize(n, "");

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		for (char c : str)
		{
			if (m == 1)
			{
				switch (c)
				{
				case 'd':
					c = 'q';

					break;
				case 'b':
					c = 'p';

					break;
				case 'q':
					c = 'd';

					break;
				case 'p':
					c = 'b';

					break;
				}
			}
			else
			{
				switch (c)
				{
				case 'd':
					c = 'b';

					break;
				case 'b':
					c = 'd';

					break;
				case 'q':
					c = 'p';

					break;
				case 'p':
					c = 'q';

					break;
				}
			}

			vec[i].push_back(c);
		}
	}

	for (auto it : vec)
	{
		for (char c : it)
		{
			cout << c;
		}

		cout << '\n';
	}
}