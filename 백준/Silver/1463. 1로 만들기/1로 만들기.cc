#include<iostream>
#include<algorithm>

using namespace std;

int arr[1000001] = {};

int main()
{
	int n;

	cin >> n;

	fill(arr, arr + 1000001, -1);

	arr[1] = 0;
	arr[2] = arr[3] = 1;

	for (int i = 4; i <= 1000000; i++)
	{
		if (i % 2 == 0 && i % 3 == 0)
		{
			arr[i] = arr[i / 2] > arr[i / 3] ? arr[i / 3] : arr[i / 2];
			arr[i]++;
		}
		else if (i % 2 == 0)
		{
			arr[i] = arr[i / 2] + 1;
		}
		else if (i % 3 == 0)
		{
			arr[i] = arr[i / 3] + 1;
		}
		
		if (arr[i] > arr[i - 1] + 1 || arr[i] == -1)
		{
			arr[i] = arr[i - 1] + 1;
		}
	}

	cout << arr[n];
}