#include<iostream>
#include<string>

using namespace std;

int main()
{
	string str, r = "";
	int state = 0;

	getline(cin, str);

	for (char c : str)
	{
		switch (state)
		{
		case 0:
			if (c == 'U')
			{
				state++;
			}

			break;
		case 1:
			if (c == 'C')
			{
				state++;
			}

			break;
		case 2:
			if (c == 'P')
			{
				state++;
			}

			break;
		case 3:
			if (c == 'C')
			{
				state++;
			}

			break;
		}
	}

	if (state == 4)
	{
		cout << "I love UCPC";
	}
	else
	{
		cout << "I hate UCPC";
	}
}