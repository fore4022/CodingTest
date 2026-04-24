#include<iostream>

using namespace std;

int nums[1000], lengths[1000];

int main()
{
	int n, o, temp, result = 0;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> o;

		nums[i] = o;
		temp = 0;

		for (int j = 0; j <= i; j++)
		{
			if (nums[j] > o)
			{
				temp = max(lengths[j], temp);
			}
		}

		lengths[i] = temp + 1;
		result = max(result, lengths[i]);
	}

	cout << result;
}