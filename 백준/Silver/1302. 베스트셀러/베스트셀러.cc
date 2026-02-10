#include<iostream>
#include<map>
#include<algorithm>

using namespace std;

int main()
{
	map<string, int> books;
	string str;
	int n, max = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (books.find(str) != books.end())
		{
			books[str]++;

			if (max < books[str])
			{
				max = books[str];
			}
		}
		else
		{
			books.insert({ str, 0 });
		}
	}

	for (pair<string, int> it : books)
	{
		if (it.second == max)
		{
			cout << it.first;

			break;
		}
	}
}