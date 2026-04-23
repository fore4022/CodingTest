#include<iostream>

using namespace std;

int main()
{
	int nums[1000], lengths[1000];
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
				temp = max(lengths[j], temp);
			}
		}

		lengths[i] = temp + 1;
		result = max(result, lengths[i]);
	}

	cout << result;
}
/*

20
954 720 740 142 832 705 710 147 538 789 58 376 705 574 822 799 498 566 604 659

6
10 20 10 30 20 50

*/