#include<iostream>

using namespace std;

int main()
{
	string str;
	int cnt = 0, result, temp, m;
	bool useWeight3 = false, weight = false;

	cin >> str;

	m = str[str.length() - 1] - '0';

	for (int i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == '*')
		{
			weight = useWeight3;
		}
		else
		{
			temp = str[i] - '0';

			if (useWeight3)
			{
				temp *= 3;
			}

			cnt += temp;
		}

		useWeight3 = !useWeight3;
	}

	result = 10 - cnt % 10;

	if (m == 0)
	{
		m = 10;
	}

	for (int i = 0; i < 10; i++)
	{
		if (m == 10 - (cnt + i * (weight ? 3 : 1)) % 10)
		{
			result = i;

			break;
		}
	}

	cout << result;
}