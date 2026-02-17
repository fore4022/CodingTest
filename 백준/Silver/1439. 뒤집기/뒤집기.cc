#include<iostream>

using namespace std;

int main()
{
	string str;
	char ch = ' ';
	int cntA = 0, cntB = 0;

	cin >> str;

	for (char c : str)
	{
		if (ch == ' ')
		{
			ch = c;

			if (ch == '0')
			{
				cntA++;
			}
			else
			{
				cntB++;
			}

			continue;
		}
		
		if (ch != c)
		{
			if (ch == '1')
			{
				cntA++;
			}
			else
			{
				cntB++;
			}

			ch = c;
		}
	}

	if (cntA > cntB)
	{
		cout << cntB;
	}
	else
	{
		cout << cntA;
	}
}