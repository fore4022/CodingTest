#include<iostream>

using namespace std;

int main()
{
	int n;
	bool arr[1001] = {};

	cin >> n;

	arr[1] = true;
	arr[2] = false;
	arr[3] = true;
	arr[4] = true;

	for (int i = 5; i <= 1000; i++)
	{
		if (arr[i - 1] == arr[i - 3] && arr[i - 1] == arr[i - 4])
		{
			arr[i] = !arr[i - 1];
		}
		else
		{
			arr[i] = true;
		}
	}

	cout << (arr[n] ? "SK" : "CY");
}