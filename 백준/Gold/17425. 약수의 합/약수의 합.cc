#include<iostream>
#include <time.h>

using namespace std;

unsigned long long result[1000001];
int arr[100000];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	for (int i = 1; i <= 1000000; i++)
	{
		for (int j = i; j <= 1000000; j += i)
		{
			result[j] += i;
		}

		result[i] += result[i - 1];
	}

	int n, m;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> m;

		cout << result[m] << '\n';
	}

	return 0;
}