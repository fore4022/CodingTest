#include<iostream>
#include<string>
#include<vector>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
	vector<pair<int, deque<int>>> results;
	deque<int> temp;
	string command, array;
	int n, o, arrayState, num = 0;
	bool isReadingNumber = true;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> command >> o >> array;

		for (char c : array)
		{
			if (isdigit(c))
			{
				num *= 10;
				num += c - '0';
				isReadingNumber = false;
			}
			else
			{
				if (isReadingNumber)
				{
					continue;
				}

				temp.push_back(num);

				num = 0;
			}
		}

		arrayState = 1;

		for (char c : command)
		{
			if (c == 'R')
			{
				arrayState = -arrayState;
			}
			else
			{
				if (arrayState == 1)
				{
					if (temp.size() == 0)
					{
						arrayState = 0;
					}
					else
					{
						temp.pop_front();
					}
				}
				else
				{
					if (temp.size() == 0)
					{
						arrayState = 0;
					}
					else
					{
						temp.pop_back();
					}
				}

				if (arrayState == 0)
				{
					break;
				}
			}
		}

		results.push_back({ arrayState, temp });

		temp = deque<int>();
		num = 0;
		isReadingNumber = true;
	}

	for (pair<int, deque<int>> p : results)
	{
		switch (p.first)
		{
		case -1:
			cout << "[";

			while (!p.second.empty())
			{
				cout << p.second.back();

				if (p.second.size() != 1)
				{
					cout << ",";
				}

				p.second.pop_back();
			}

			cout << "]";

			break;
		case 0:
			cout << "error";

			break;
		case 1:
			cout << "[";

			while (!p.second.empty())
			{
				cout << p.second.front();

				if (p.second.size() != 1)
				{
					cout << ",";
				}

				p.second.pop_front();
			}

			cout << "]";

			break;
		}

		cout << '\n';
	}
}