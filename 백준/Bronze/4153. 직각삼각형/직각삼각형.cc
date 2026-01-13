#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<string> result;
	int a, b, c;

	while (cin >> a >> b >> c)
	{
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}

		if (b * b + c * c == a * a || c * c + a * a == b * b || a * a + b * b == c * c)
		{
			result.push_back("right\n");
		}
		else
		{
			result.push_back("wrong\n");
		}
	}

	for (string str : result)
	{
		cout << str;
	}
}