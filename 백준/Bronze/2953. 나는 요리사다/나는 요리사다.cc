#include<iostream>

using namespace std;

int main()
{
	int a, b, c, d, maxIndex, maxSum = 0;

	for (int i = 1; i <= 5; i++)
	{
		cin >> a >> b >> c >> d;

		if (a + b + c + d > maxSum)
		{
			maxSum = a + b + c + d;
			maxIndex = i;
		}
	}

	cout << maxIndex << " " << maxSum;
}