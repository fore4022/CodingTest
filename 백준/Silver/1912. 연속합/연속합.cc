#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, o, maxSum, temp;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		if (i == 0)
		{
			maxSum = temp = o;

			continue;
		}

		temp = max(temp + o, o);

		if (temp > maxSum)
		{
			maxSum = temp;
		}
	}

	cout << maxSum;
}