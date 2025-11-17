#include<iostream>

using namespace std;

int arr[100], result[1001];

int main()
{
	int n, cnt = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 2; i <= 1000; i++)
	{
		for (int j = i; j <= 1000;j += i)
		{
			result[j] += i;
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (arr[i] == result[arr[i]])
		{
			cnt++;
		}
	}

	cout << cnt;
}