#include<iostream>

using namespace std;

int main()
{
	int nums[1000], sums[1000];
	int n, o, temp, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		nums[i] = o;
		temp = 0;

		for (int j = 0; j <= i; j++)
		{
			if (nums[j] < o)
			{
				temp = max(sums[j], temp);
			}
		}

		sums[i] = temp + o;
		result = max(result, sums[i]);
	}

	cout << result;
}