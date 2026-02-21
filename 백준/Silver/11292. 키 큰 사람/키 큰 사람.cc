#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
	vector<string> results;
	vector<pair<string, float>> vec;
	string name;
	float hieght, max;
	int n;

	while (cin >> n)
	{
		if (n == 0)
		{
			break;
		}

		vec = vector<pair<string, float>>();
		max = 0;

		for (int i = 0; i < n; i++)
		{
			cin >> name >> hieght;

			vec.push_back({ name, hieght });

			if (max < hieght)
			{
				max = hieght;
			}
		}

		for (auto it : vec)
		{
			if (it.second == max)
			{
				results.push_back(it.first);
			}
		}

		results.push_back("\n");
	}

	for (string s : results)
	{
		cout << s;

		if (s.compare("\n"))
		{
			cout << " ";
		}
	}
}