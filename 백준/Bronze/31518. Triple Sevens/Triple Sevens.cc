#include<iostream>

using namespace std;

int main()
{
	int n, o, cnt = 0;
	bool isSeven;

	cin >> n;

	for (int i = 0; i < 3; i++)
	{
		isSeven = false;

		for (int j = 0; j < n; j++)
		{
			cin >> o;
			
			if (!isSeven)
			{
				isSeven = o == 7;
			}
		}

		cnt += isSeven ? 1 : 0;
	}

	if (cnt == 3)
	{
		cout << "777";
	}
	else
	{
		cout << "0";
	}
}