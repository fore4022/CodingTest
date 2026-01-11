#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	vector<int> numbers;
	string str;
	int cnt = 0, streak = 0, n;

	cin >> n;


	for (int i = 0; i < n; i++)
	{
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (str.at(j) == 'O')
			{
				streak++;
				cnt += streak;
			}
			else
			{
				streak = 0;
			}
		}

		numbers.push_back(cnt);
		cnt = streak = 0;
	}

	for (int i = 0; i < n; i++)
	{
		cout << numbers.at(i) << '\n';
	}
}