#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main()
{
	deque<char> deque, temp;
	string str, word;
	bool isTag = false;

	getline(cin, str);

	for (char c : str)
	{
		if (c == '<')
		{
			isTag = true;
		}

		if (c == ' ' || isTag)
		{
			while (!temp.empty())
			{
				deque.push_back(temp.back());

				if (temp.size() != 0)
				{
					temp.pop_back();
				}
			}

			deque.push_back(c);
		}
		else
		{
			temp.push_back(c);
		}

		if (c == '>')
		{
			isTag = false;
		}
	}

	while (!temp.empty())
	{
		deque.push_back(temp.back());

		if (temp.size() != 0)
		{
			temp.pop_back();
		}
	}

	for (int i = 0; i < str.length(); i++)
	{
		cout << deque.front();

		if (deque.size() != 0)
		{
			deque.pop_front();
		}
	}
}