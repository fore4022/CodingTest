#include<iostream>

using namespace std;

int main()
{
	int n, result = 0, i = 1, temp;

	cin >> n;

	while (n >= 5 * i)
	{
		temp = i;
		temp += (n - 5 * i) / 3;
		
		if ((n - 5 * i) % 3 != 0)
		{
			i++;
			continue;
		}

		if (result == 0)
		{
			result = temp;
		}
		else if (result > temp)
		{
			result = temp;
		}

		i++;
	}

	i = 1;

	while (n >= 3 * i)
	{
		temp = i;
		temp += (n - 3 * i) / 5;
		
		if ((n - 3 * i) % 5 != 0)
		{
			i++;
			continue;
		}

		if (result == 0)
		{
			result = temp;
		}
		else if (result > temp)
		{
			result = temp;
		}

		i++;
	}

	if (result == 0)
	{
		result = -1;
	}

	cout << result;
}