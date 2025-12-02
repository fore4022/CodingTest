#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	int arr[10];
	int o, n, a, temp, digit = 0, case1 = 0, case2 = 5000000, case3 = 0;
	bool b;

	cin >> o >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	temp = o;

	do
	{
		a = temp % 10;
		temp /= 10;

		for (int i = 0; i < n; i++)
		{
			if (a == arr[i])
			{
				case1 = 500000;
				
				break;
			}
		}
	} while (temp > 0);

	if (case1 != 500000)
	{
		temp = o;

		do
		{
			temp /= 10;
			digit++;
		} while (temp > 0);

		case1 = digit;
	}
	else
	{
		case1 = 5000000;
	}

	for (int i = 1; i <= 1000000; i++)
	{
		temp = o - i;
		b = false;

		if (temp >= 0)
		{
			do
			{
				a = temp % 10;
				temp /= 10;

				for (int j = 0; j < n; j++)
				{
					if (a == arr[j])
					{
						b = true;
					}
				}

				if (b)
				{
					break;
				}
			} while (temp > 0);

			if (!b)
			{
				if (abs(o - case2) > abs(o - (o - i)))
				{
					case2 = o - i;
				}
			}
		}

		temp = o + i;
		b = false;

		do
		{
			a = temp % 10;
			temp /= 10;

			for (int j = 0; j < n; j++)
			{
				if (a == arr[j])
				{
					b = true;
				}
			}

			if (b)
			{
				break;
			}
		} while (temp > 0);

		if (!b)
		{
			if (abs(o - case2) > abs(o - (o + i)))
			{
				case2 = o + i;
			}
		}
	}

	if(case2 != 5000000)
	{
		temp = case2;
		digit = 0;

		do
		{
			temp /= 10;
			digit++;
		} while (temp > 0);

		case2 = abs(o - case2) + digit;
	}
	else
	{
		case2 = 5000000;
	}

	if (o > 100)
	{
		case3 = o - 100;
	}
	else if (o < 100)
	{
		case3 = 100 - o;
	}
	else
	{
		case3 = 0;
	}

	std::cout << min(min(case1, case2), case3);
}