#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
	map<string, bool> m;
	string str, temp;
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> str;

		if (str.size() >= 6)
		{
			temp = str.substr(str.size() - 6, 6);

			if (!temp.compare("Cheese"))
			{
				if (m[str] == false)
				{
					m[str] = true;
					cnt++;
				}
			}
		}
	}

	if (cnt >= 4)
	{
		cout << "yummy";
	}
	else
	{
		cout << "sad";
	}
}