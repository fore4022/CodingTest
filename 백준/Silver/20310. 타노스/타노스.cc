#include<iostream>
#include<deque>

using namespace std;

int main()
{
	deque<char> d;
	deque<char>::iterator it;
	string str;
	int count0 = 0, count1 = 0;

	cin >> str;

	for (char c : str)
	{
		d.push_back(c);

		if (c == '0')
		{
			count0++;
		}
		else
		{
			count1++;
		}
	}

	

	for (int i = 0; i < count0 / 2; i++)
	{
		it = d.end() - 1;

		while (*it != '0')
		{
			it = prev(it);
		}

		d.erase(it);
	}


	for (int i = 0; i < count1 / 2; i++)
	{
		it = d.begin();

		while (*it != '1')
		{
			it = next(it);
		}

		d.erase(it);
	}

	while (d.size() != 0)
	{
		cout << d.front();

		d.pop_front();
	}
}