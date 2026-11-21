#include<iostream>

using namespace std;

int main()
{
	int o, a, b;

	cin >> o;

	for (int i = 0; i < o; i++)
	{
		cin >> a >> b;

		while (a > 10)
		{
			a = a % 10;
		}

		switch (a)
		{
		case 0:
			cout << 10;

			break;

		case 1:
			cout << 1;

			break;

		case 2:
			switch (b % 4)
			{
			case 0:
				cout << 6;

				break;

			case 1:
				cout << 2;

				break;

			case 2:
				cout << 4;

				break;

			case 3:
				cout << 8;

				break;
			}

			break;

		case 3:
			switch (b % 4)
			{
			case 0:
				cout << 1;

				break;

			case 1:
				cout << 3;

				break;

			case 2:
				cout << 9;

				break;

			case 3:
				cout << 7;

				break;
			}

			break;

		case 4:
			if (b % 2 == 0)
			{
				cout << 6;
			}
			else
			{
				cout << 4;
			}

			break;

		case 5:
			cout << 5;

			break;

		case 6:
			cout << 6;

			break;

		case 7:
			switch (b % 4)
			{
			case 0:
				cout << 1;

				break;

			case 1:
				cout << 7;

				break;

			case 2:
				cout << 9;

				break;

			case 3:
				cout << 3;

				break;
			}

			break;

		case 8:
			switch (b % 4)
			{
			case 0:
				cout << 6;

				break;

			case 1:
				cout << 8;

				break;

			case 2:
				cout << 4;

				break;

			case 3:
				cout << 2;

				break;
			}

			break;

		case 9:
			if (b % 2 == 0)
			{
				cout << 1;
			}
			else
			{
				cout << 9;
			}

			break;

		case 10:
			cout << 10;

			break;
		}

		cout << "\n";
	}
}