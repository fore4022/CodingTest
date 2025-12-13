#include<iostream>

using namespace std;

int arr[10000];

int main()
{
	int a, b, temp, cnt = 0;

	cin >> a >> b;

	for (int i = 0; i < a; i++)
	{
		cin >> temp;

		if (temp < b)
		{
			arr[cnt] = temp;

			cnt++;
		}
	}

	for (int i = 0; i < cnt; i++)
	{
		cout << arr[i] << " ";
	}
}