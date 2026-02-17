#include<iostream>

using namespace std;

bool arr[10001];

int main()
{
	int cnt, temp;

	for (int i = 1; i <= 10000; i++)
	{
		cnt = temp = i;

		while (temp % 10 >= 0 && temp != 0)
		{
			cnt += temp % 10;
			temp /= 10;
		}

		if (cnt <= 10000)
		{
			arr[cnt] = true;
		}
	}

	for (int i = 1; i <= 10000; i++)
	{
		if (!arr[i])
		{
			cout << i << '\n';
		}
	}
}