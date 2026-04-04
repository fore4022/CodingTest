#include<iostream>

using namespace std;

int main()
{
	char c;
	int n, state = 0, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> c;

		if (state == 3 && c == 'p')
		{
			state = 0;
			result++;
		}
		else if (state == 1 && c == 'P')
		{
			state++;
		}
		else if (state == 2 && c == 'A')
		{
			state++;
		}
		else if (c == 'p')
		{
			state = 1;
		}
		else
		{
			state = 0;
		}
	}

	cout << result;
}