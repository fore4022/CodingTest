#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<char> list;
	string str;
	int n;

	cin >> str >> n;

	for (char c : str)
	{
		list.push_back(c);
	}

	auto it = list.end();

	for (int i = 0; i < n; i++)
	{
		char c;

		cin >> c;

		switch (c)
		{
		case 'L':
			if (it != list.begin())
			{
				it--;
			}
			break;
		case 'D':
			if (it != list.end())
			{
				it++;
			}
			break;
		case 'B':
			if (it != list.begin())
			{
				list.erase(prev(it));
			}
			break;
		case 'P':
			cin >> c;

			list.insert(it, c);
			break;
		}
	}

	for (char c : list)
	{
		cout << c;
	}
}