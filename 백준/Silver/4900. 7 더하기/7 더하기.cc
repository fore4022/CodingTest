#include<iostream>
#include<string>

using namespace std;

int ToInt(string str)
{
	string temp;
	int value, sum = 0;

	for (int i = 0; i < str.length() / 3; i++)
	{
		temp = str.substr(i * 3, 3);

		if (!temp.compare("063"))
		{
			value = 0;
		}
		else if (!temp.compare("010"))
		{
			value = 1;
		}
		else if (!temp.compare("093"))
		{
			value = 2;
		}
		else if (!temp.compare("079"))
		{
			value = 3;
		}
		else if (!temp.compare("106"))
		{
			value = 4;
		}
		else if (!temp.compare("103"))
		{
			value = 5;
		}
		else if (!temp.compare("119"))
		{
			value = 6;
		}
		else if (!temp.compare("011"))
		{
			value = 7;
		}
		else if (!temp.compare("127"))
		{
			value = 8;
		}
		else
		{
			value = 9;
		}

		sum *= 10;
		sum += value;
	}

	return sum;
}

int main()
{
	string str, front, back, temp;
	int pos, a, b, sum = 0;

	for (;;)
	{
		cin >> str;

		if (!str.compare("BYE"))
		{
			break;
		}

		cout << str;

		str.pop_back();

		pos = str.find('+');
		front = str.substr(0, pos);
		back = str.substr(pos + 1);
		a = ToInt(front);
		b = ToInt(back);
		sum = a + b;
		temp = to_string(sum);

		for (char c : temp)
		{
			switch (c)
			{
			case '0':
				cout << "063";

				break;

			case '1':
				cout << "010";

				break;

			case '2':
				cout << "093";

				break;

			case '3':
				cout << "079";

				break;

			case '4':
				cout << "106";

				break;

			case '5':
				cout << "103";

				break;

			case '6':
				cout << "119";

				break;

			case '7':
				cout << "011";

				break;

			case '8':
				cout << "127";

				break;

			case '9':
				cout << "107";

				break;
			}
		}

		cout << '\n';
	}
}